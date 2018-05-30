#!/bin/bash
#compile, link and execute the program 
g++ -c src/database.cpp -o database.o
g++ -c gmock/test_database.cpp -o test_database.o
g++ -o ptest database.o test_database.o -lgtest -lgtest_main -lgmock -pthread
./ptest
rm database.o test_database.o ptest

