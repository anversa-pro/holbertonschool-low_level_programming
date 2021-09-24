#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra -L -c *.c
gcc -shared -o liball.so *.o
