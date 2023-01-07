# Define a compiler
CC = g++

# Define flags
CPP_FLAGS = -o

# Define source path
SRC = src

# define basics
BSC = basics
LGC = logic

basics:
	$(CC) $(SRC)/$(BSC)/loops.cpp -o ./index
	./index

clean:
	rm ./index