#!/bin/bash
gcc -c -Wall -Werror -fpic *.c
gcc *.o -shared -o liball.so
