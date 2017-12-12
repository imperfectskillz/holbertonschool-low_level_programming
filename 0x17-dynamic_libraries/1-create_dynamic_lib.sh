#!/bin/bash
gcc -Wall -fPIC -c -Werror *.c
gcc -shared -Wl -o liball.so *.o
