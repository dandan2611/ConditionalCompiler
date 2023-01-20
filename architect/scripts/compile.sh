#!/bin/bash

BUILD_SRC_DIR="build/src"
BUILD_COND_SRC_DIR="build/src/cond"

if [ -z "$1" ] || [ -z "$2" ]; then
    echo "Incorrect or missing arguments"
    exit 1
fi

echo "Copying sources using '$1' with value '$2'"

for file in $(find src -name "*.c"); do
    conditional=$(cat $file | grep "conditional")
    if [ ! -z "$conditional" ]; then
        split=$(echo "$(echo "$conditional" |  sed 's/.*\[\([^]]*\)\].*/\1/g')"\
            | tr "," "\n")
        if [ "$(echo "$split" | grep "name" | tr "=" "\n" \
            | tail -n 1)" == "$1" ]; then
            [ "$(echo "$split" | grep "value" | tr "=" "\n" | tail -n 1)" \
                == "$2" ] \
                && cp $file $BUILD_COND_SRC_DIR/$(basename "$file")
        fi
    else cp $file $BUILD_SRC_DIR/$(basename "$file")
    fi
done
