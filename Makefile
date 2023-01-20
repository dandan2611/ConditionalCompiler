##
## EPITECH PROJECT, 2022
## ConditionalCompiler
## File description:
## Makefile
##

# Project configuration
PROJECT_NAME	:=	"BetterLibMy"
PROJECT_AUTHORS	:=	"Adam CAVILLON"
PROJECT_VERSION	:=	"3.6.1"
PROJECT_YEAR	:=	"2022"
PROJECT_DESC	:=	"Just a *better* LibMy"

# Conditional compilation configuration
# Use conditional with @conditional[name=KEY, value=VALUE]

# Files
COND_COMP_INCLUDE_OPEN	:=	1
COND_COMP_INCLUDE_STAT	:=	1

CC	:= gcc
ADDTIONAL_FLAGS	:=	-Wall -Wpedantic -Wextra -Werror -Wno-unused-parameter
HEADERS	:=	$(shell find include -name *.h -type f)

# Variables to pass to Architect
PROJECT_PARAMS = PROJECT_NAME=$(PROJECT_NAME) \
	PROJECT_AUTHORS=$(PROJECT_AUTHORS) \
	PROJECT_VERSION=$(PROJECT_VERSION) \
	PROJECT_YEAR=$(PROJECT_YEAR) \
	PROJECT_DESC=$(PROJECT_DESC)
ARCHITECT_CONDS	:=	$(shell echo "*$(.VARIABLES)" | tr " " "\n" | \
		grep "COND_COMP_")
ARCHITECT_PARAMS	:= $(PROJECT_PARAMS) ADDTIONAL_FLAGS=$(ADDTIONAL_FLAGS) \
	$(foreach v, $(ARCHITECT_CONDS), $(v)=$(value $(v)))

all: build

re: fclean all

build:
	@make -sC architect archi prepare compile $(ARCHITECT_PARAMS)*
	@ar rc libmy.a build/obj/*.o
	@mv libmy.a ../libmy.a
	@cp include/*.h ../../include

clean:
	@make -sC architect archi clean $(ARCHITECT_PARAMS)

fclean:
	@make -sC architect archi fclean $(ARCHITECT_PARAMS)
	@rm -f ../libmy.a

.PHONY: all re build clean fclean
