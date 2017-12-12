#!/bin/bash
gcc -Wall -fPIC -c -Werror *.c
gcc -shared -o liball.so *.o
