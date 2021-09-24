#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra -c *.c
gcc *-o -shared -o liball.so
