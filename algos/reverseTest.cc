#include "reverse.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class reverseTest : public TestFixture {
	CPPUNIT_TEST_SUITE(reverseTest);
	CPPUNIT_TEST(sasakikai);
	CPPUNIT_TEST(abcdefg);
	CPPUNIT_TEST_SUITE_END();

	void sasakikai(){
		char str[64] = "sasakikai";
		CPPUNIT_ASSERT( strcmp(reverse(str), "iakikasas") == 0 );
	}
	
	void abcdefg(){
		char str[64] = "abcdefg";
		CPPUNIT_ASSERT( strcmp(reverse(str), "gfedcba") == 0 );
	}

};

CPPUNIT_TEST_SUITE_REGISTRATION(reverseTest);
