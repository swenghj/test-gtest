#include "../include/database.h"
#include "../include/mydb.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
using ::testing::AtLeast;
using ::testing::Return; 
using ::testing::_;					// for parameter list to function signature 
using ::testing::DoDefault;			// for default behavior using ON_CALL and EXPECT_CALL
using ::testing::Invoke;			// for invoking/executing the virtual method implementation 
using ::testing::InvokeWithoutArgs;	// for invoking/executing without parameter list passed on 

// gmock steps:
//				1. derive interface 
//				2. all Mock moethods are in the public section
// 				3. Macro with the function signature 
// 				4. Google Mock framework will generate the definition of moethods

// 1. derive interface 
class MockDatabase : public database {	
// 2. all Mock moethods are in the public section - mocking on virtual methods 
public:
	// 3. Macro with the function signature 
	MOCK_METHOD0(insertRecord, int());
	MOCK_METHOD0(updateRecord, int());
	MOCK_METHOD0(removeRecord, int());
	MOCK_METHOD2(check_credential, bool(string id, string pw));
	MOCK_METHOD2(update_credential, void(string id, string pw));
	// 4. Google Mock framework will generate the definition of moethods
};

TEST(MockTest, create_record_test) {
	// 1. arrangement
	MockDatabase mock_db; 		// create mock object 
	MyDatabase my_db(mock_db);

	// Macro setting the bahevior of particular interface method
	EXPECT_CALL(mock_db, check_credential("super", "root"))	// expectation 
	.Times(AtLeast(1))										// cardiality 
	.WillOnce(Return(true));

	// 2. action 
	bool res = my_db.login("super", "root"); 
	// TODO:
	// -> investigation on failure: (https://www.youtube.com/watch?v=dLB2aDasVTg)
	// -> following action succeed
	// bool res = mock_db.check_credential("super", "root");

	// 3. assert 
	EXPECT_EQ(res, true);

}

int main(int argc, char** argv) {
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
