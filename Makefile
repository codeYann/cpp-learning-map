# Define a compiler
CC = g++

# Define flags
CPP_FLAGS = -o

# Define source path
SRC = src

# define basics
BSC = basics
FN = functions

basics:
	$(CC) $(SRC)/$(BSC)/loops.cpp -o ./bsc
	./bsc

functions:
	$(CC) $(SRC)/$(FN)/fn.cpp -o ./fn
	./fn


clean:
	rm ./fn