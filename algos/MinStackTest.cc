#include "MinStack.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class MinStackTest: public TestFixture{
	CPPUNIT_TEST_SUITE(MinStackTest);
	CPPUNIT_TEST(pop15472);
	CPPUNIT_TEST(min154720);
	CPPUNIT_TEST(min141100);
	CPPUNIT_TEST_SUITE_END();

	void pop15472(){
		MinStack *st = new MinStack();
		
		st->push(1);
		st->push(5);
		st->push(4);
		st->push(7);
		st->push(2);
		
		char idString[8];
		char ansString[32];
		for( int i = 0 ; i < 5 ; i++ ){
			sprintf(idString, "%d", st->pop());
			strcat(ansString, idString);
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "27451") );
	}

	void min154720(){
		MinStack *st = new MinStack();
		
		st->push(1);
		st->push(5);
		st->push(4);
		st->push(7);
		st->push(2);
		st->push(0);
		
		CPPUNIT_ASSERT( st->min() == 0 );
	}

	void min141100(){
		MinStack *st = new MinStack();
		
		st->push(1);
		st->push(4);
		st->push(1);
		st->push(1);
		st->push(0);
		st->push(0);
		
		st->pop();
		st->pop();
		CPPUNIT_ASSERT( st->min() == 1 );
	}

		
};

CPPUNIT_TEST_SUITE_REGISTRATION(MinStackTest);

