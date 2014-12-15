#!/bin/sh
#the following was from
#http://www.techytalk.info/c-cplusplus-library-programming-on-linux-part-one-static-libraries/
g++ -c supercool.cpp 
ar rcs libsupercool.a supercool.o
g++ f14_ex1.cpp -L. -lsupercool 
