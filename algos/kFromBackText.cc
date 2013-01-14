#include "kFromBack.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class kFromBackTest : public TestFixture{
	CPPUNIT_TEST_SUITE(kFromBackTest);
	CPPUNIT_TEST(test1);
	CPPUNIT_TEST_SUITE_END();

	void test1(){
		Node *n1 = new Node(1);
		Node *n2 = new Node(2);
		Node *n3 = new Node(3);
		Node *n4 = new Node(4);
		Node *n5 = new Node(5);

		n1->setNext(n2);
		n2->setNext(n3);
		n3->setNext(n4);
		n4->setNext(n5);
		
		Node *top = kFromBack(n1, 2);
		CPPUNIT_ASSERT( top->id == 4 );
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION(kFromBackTest);
