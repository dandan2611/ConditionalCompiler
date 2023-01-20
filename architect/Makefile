##
## EPITECH PROJECT, 2022
## ConditionalCompiler
## File description:
## Makefile
##

# Compiler
CC	:=	gcc

# Architect
VERSION	:=	0.0.1

# Directories
COMPILER_DIR	:=	$(shell pwd)
BASEDIR		:=	..
INCLUDE_DIR	:=	$(BASEDIR)/include
BUILD_DIR	:=	$(BASEDIR)/build
BUILD_SRC	:=	$(BUILD_DIR)/src
BUILD_COND_SRC	:=	$(BUILD_DIR)/src/cond
BUILD_OBJ	:=	$(BUILD_DIR)/obj

all: prepare compile

re: fclean all

archi:
	@echo "--------------------------------------------------------------------"
	@echo ""
	@echo -e "\tArchitect"
	@echo -e "\tVersion $(VERSION)"
	@echo ""
	@echo "--------------------------------------------------------------------"
	@echo ""
	@echo -e "\tProject name: $(PROJECT_NAME)"
	@echo -e "\tProject author(s): $(PROJECT_AUTHORS)"
	@echo -e "\tProject version: $(PROJECT_VERSION)"
	@echo -e "\tProject year: $(PROJECT_YEAR)"
	@echo -e "\tProject description: $(PROJECT_DESC)"
	@echo ""
	@echo "--------------------------------------------------------------------"
	echo "Starting Architect at '$(COMPILER_DIR)'"

prepare:
	@echo ""
	@echo ">>> PREPARE <<<-----------------------------------------------------"
	@echo "Build directory located at '$(BUILD_DIR)' \
	(will be created if not exist)"
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BUILD_SRC)
	@mkdir -p ${BUILD_COND_SRC}
	@mkdir -p ${BUILD_OBJ}
	@echo "Copying source files to compile..."
	@$(foreach v, .VARIABLES, \
		$(foreach t, $(shell echo "*$($(v))" | tr " " "\n" | \
		grep "COND_COMP" | \
		sed "s|COND_COMP_||g" | tr '[:upper:]' '[:lower:]'), \
				cd $(BASEDIR); ./architect/scripts/compile.sh $(t) \
				$(value $(shell echo "COND_COMP_$(t)" | \
				tr '[:lower:]' '[:upper:]')) \
		))
	@find $(BUILD_SRC) -type f -name "*.c" | wc -l | \
		xargs -I {} echo "Copied {} source files!"
compile:
	@echo ""
	@echo ">>> COMPILE <<<-----------------------------------------------------"
	@echo "Compiling object files..."
	@$(foreach f, $(shell find $(BUILD_SRC) -type f -name "*.c" | tr " " "\n"),\
		$(CC) -c $(f) -o $(BUILD_OBJ)/$(shell basename $(f) $(ADDTIONAL_FLAGS) \
			| sed "s/.c/.o/g") \
			-I${INCLUDE_DIR}; \
	)
	@find $(BUILD_OBJ) -type f -name "*.o" | wc -l | \
		xargs -I {} echo "Compiled {} object files!"

clean:
	@echo "Cleaning build directory..."
	@rm -rf $(BUILD_DIR)

fclean: clean

.PHONY: all re archi prepare compile time clean fclean
