#include "Stack.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class StackTest: public TestFixture{
	CPPUNIT_TEST_SUITE(StackTest);
	CPPUNIT_TEST(test1);
	CPPUNIT_TEST_SUITE_END();

	void test1(){
		Stack *st = new Stack();
		
		st->push(1);
		st->push(2);
		st->push(3);
		
		char idString[8];
		char ansString[32];
		for( int i = 0 ; i < 3 ; i++ ){
			sprintf(idString, "%d", st->pop());
			strcat(ansString, idString);
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "321") );
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION(StackTest);

