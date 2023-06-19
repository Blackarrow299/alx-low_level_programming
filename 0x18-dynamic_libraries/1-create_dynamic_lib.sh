#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fpic *.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o liball.so *.o
