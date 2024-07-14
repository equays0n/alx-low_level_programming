#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library
ar rcs libmy.a *.o

# Clean up the object files
rm *.o
