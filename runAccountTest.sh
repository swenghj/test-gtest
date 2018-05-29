#!/bin/bash
#compile, link and execute the program 
g++ -c src/account.cpp -o account.o
g++ -c gtest/test_account.cpp -o test_account.o
g++ -o ptest account.o test_account.o -lgtest -lgtest_main -pthread
./ptest
rm account.o test_account.o ptest

