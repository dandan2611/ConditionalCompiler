##
## EPITECH PROJECT, 2022
## ConditionalCompiler
## File description:
## Makefile
##

# Project configuration
PROJECT_NAME	:=	"MyProject"
PROJECT_AUTHORS	:=	"Adam CAVILLON"
PROJECT_VERSION	:=	"1.0.0"
PROJECT_YEAR	:=	"2022"
PROJECT_DESC	:=	"An awesome project!"

# Conditional compilation configuration
COND_COMP_ENABLE_TIME	:=	0
COND_COMP_ENABLE_STAT	:=	0
COND_COMP_ENABLE_STDIO	:=	1

# Variables to pass to Architect
PROJECT_PARAMS = PROJECT_NAME=$(PROJECT_NAME) \
	PROJECT_AUTHORS=$(PROJECT_AUTHORS) \
	PROJECT_VERSION=$(PROJECT_VERSION) \
	PROJECT_YEAR=$(PROJECT_YEAR) \
	PROJECT_DESC=$(PROJECT_DESC)
ARCHITECT_CONDS	:=	$(shell echo "*$(.VARIABLES)" | tr " " "\n" | \
		grep "COND_COMP_")
ARCHITECT_PARAMS	:= $(PROJECT_PARAMS) $(foreach v, $(ARCHITECT_CONDS), \
	$(v)=$(value $(v));)

all: build

re: fclean all

build:
	@make -sC architect archi prepare compile $(ARCHITECT_PARAMS)

clean:
	@make -sC architect archi clean $(ARCHITECT_PARAMS)

fclean: clean
	@make -sC architect archi fclean $(ARCHITECT_PARAMS)

.PHONY: all re build clean fclean
