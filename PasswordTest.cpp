/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)

};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
};

TEST(PasswordTest, mixed_case)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("ABCdefghIjKLM");
	ASSERT_EQ(true, actual);
};

TEST(PasswordTest, upper_only)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("ABCDEFG");
	ASSERT_EQ(false, actual); 
};

TEST(PasswordTest, lower_only)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("ABCDEFG");
	ASSERT_EQ(false, actual); 
};
