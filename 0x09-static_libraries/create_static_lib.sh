#!/bin/bash
gcc -c *.c
 ar -rc liball.a *.o

#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library liball.a from all object files
ar rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up: Remove the temporary object files
rm -f *.o
