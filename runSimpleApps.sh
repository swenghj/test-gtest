#!/bin/bash
#compile, link and execute the program 
g++ -c src/apps.cpp -o apps.o
g++ -c gtest/test_apps.cpp -o test_apps.o
g++ -o ptest apps.o test_apps.o -lgtest -lgtest_main -pthread
./ptest
rm apps.o test_apps.o ptest

