# 10 points
# Define Make rules as follows:
# A default rule to compile a .c file into a .o file
# A rule for "all" to build the entire project into a program called "game"
# A rule for "clean" to remove all .o files

SRC = $(wildcard *.c)               
OBJS = $(patsubst %.c, %.o, $(SRC))

rule:$(OBJS)

all: game
game: game.o card.o
	cc -o game game.o card.o

clean:
	rm -rf *.o