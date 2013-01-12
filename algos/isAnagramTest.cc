#include "isAnagram.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class isAnagramTest : public TestFixture{
	CPPUNIT_TEST_SUITE(isAnagramTest);
	CPPUNIT_TEST(anagram);
	CPPUNIT_TEST(nonAnagram);
	CPPUNIT_TEST_SUITE_END();

	void anagram(){
		char str1[64] = "abcdeff";
		char str2[64] = "ffedabc";
		CPPUNIT_ASSERT( isAnagram(str1, str2) );
	}

	void nonAnagram(){
		char str1[64] = "abcdeff";
		char str2[64] = "abcddff";
		CPPUNIT_ASSERT( !isAnagram(str1, str2) );
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION(isAnagramTest);
