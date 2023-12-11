#!/bin/bash
gcc -fPIC *.c
gcc -shared *.o -o libgiga.so
