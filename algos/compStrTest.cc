#include "compStr.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class compStrTest : public TestFixture {
	CPPUNIT_TEST_SUITE(compStrTest);
	CPPUNIT_TEST(aaabbccce);
	CPPUNIT_TEST(abcdef);
	CPPUNIT_TEST(aaaaaaaaaaaaaaaaabbcceeedddd);
	CPPUNIT_TEST_SUITE_END();

	void aaabbccce(){
		char org[64] = "aaabbccce";
		char ans[64];
		memset(ans, '\0', sizeof(char)*64);
		compStr(org, ans);
		CPPUNIT_ASSERT( strcmp(ans, "a3b2c3e") == 0 );
	}

	void abcdef(){
		char org[64] = "abcdef";
		char ans[64];
		memset(ans, '\0', sizeof(char)*64);
		compStr(org, ans);
		CPPUNIT_ASSERT( strcmp(ans, "abcdef") == 0 );
	}
	
	void aaaaaaaaaaaaaaaaabbcceeedddd(){
		char org[64] = "aaaaaaaaaaaaaaaaabbcceeedddd";
		char ans[64];
		memset(ans, '\0', sizeof(char)*64);
		compStr(org, ans);
		CPPUNIT_ASSERT( strcmp(ans, "a17b2c2e3d4") == 0 );
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION(compStrTest);
