#!/bin/bash
gcc -c *.c
ar rcv liball.a *.o
ranlib liball.a
