#!/bin/bash
gcc -fPIC *.c
gcc -shared *.o -o liball.so
