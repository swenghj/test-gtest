#!/bin/bash
#compile, link and execute the program 
g++ -c src/stack.cpp -o stack.o
g++ -c gtest/test_stack.cpp -o test_stack.o
g++ -o ptest stack.o test_stack.o -lgtest -lgtest_main -pthread
./ptest
rm stack.o test_stack.o ptest

