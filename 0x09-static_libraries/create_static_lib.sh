#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rcv liball.a *.o
ranlib liball.a
