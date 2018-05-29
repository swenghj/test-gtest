#include "../include/account.h"
#include <gtest/gtest.h>

// refactor the command parts of the unit tests
struct MyAccountTestFixture : public testing::Test {
	Account *ac;
	void SetUp() { cout << "SetUp account" << endl; ac = new Account("root", "mainstreet"); }	
	void TearDown() { cout << "TearDown" << endl; delete ac; }
};

TEST_F(MyAccountTestFixture, test_id) {
	// act 
	ac->setId("no-root");
	cout << "changed ID: " << ac->getId() << endl;

	// assert
	EXPECT_EQ(ac->getId(), "no-root");
}

TEST_F(MyAccountTestFixture, test_password) {
	// act 
	ac->setPass("12345");
	cout << "changed Password: " << ac->getPass() << endl;

	// assert 
	EXPECT_EQ(ac->getPass(), "mainstreet"); // --> this will fail
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}