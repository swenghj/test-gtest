// gtest using test fixture which is commont execution of the each test case 
// each test case is structured as,
//				1. arrangement 
//				2. act 
//				3. assert 

#include "../include/stack.h"
#include <gtest/gtest.h>

// gtest fixture 
struct IntStackTest_Def : public testing::Test {
	IntStack myDefStack;
	void SetUp() {
		cout << "IntStackTest setup default integer stack..." << endl;
	}
	void TearDown() {
		cout << "IntStackTest tear down default integer stack..." << endl;
	}
};

TEST_F(IntStackTest_Def, test1) {
	// 1. arrange 
	int elem = 0;

	// 2. act 
	for(int i=0; i<DEFAULT_ARRAY_SIZE; i++) {
		elem += myDefStack.pop();
	}

	// 3. assert 
	EXPECT_EQ(elem, 55);
	EXPECT_EQ(myDefStack.getSize(), 0);	
}

TEST_F(IntStackTest_Def, test2) {
	// 1. arrange
	int elem = 0;

	// 2. act 
	for(int i=0; i<DEFAULT_ARRAY_SIZE; i++) {
		elem = myDefStack.pop();
		if(elem != 5) continue; 
		else break;
	}

	// 3. assert 
	EXPECT_EQ(elem, 5);
	EXPECT_EQ(myDefStack.getSize(), 5);	// --> this will fail, the size should be 4
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
