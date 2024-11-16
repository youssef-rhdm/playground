CC = cc
NAME = program
DEPS = strings.c



all:${NAME}

%.o:%.c
	${CC} -c $^
