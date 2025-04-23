#!/bin/bash
gcc -E task-10.c -o task-10.i && gcc -S  task-10.i -o task-10.s && gcc -c task-10.s -o task-10.o && gcc  task-10.o -o task-10.exe