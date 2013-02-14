#include "CycleNode.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class CycleNodeTest : public TestFixture{
	CPPUNIT_TEST_SUITE(CycleNodeTest);
	CPPUNIT_TEST(test1);
	CPPUNIT_TEST_SUITE_END();

	void test1(){
		CycleNode *cn1 = new CycleNode(1);
		CycleNode *cn2 = new CycleNode(2);
		CycleNode *cn3 = new CycleNode(3);
		CycleNode *cn4 = new CycleNode(4);
		CycleNode *cn5 = new CycleNode(5);
		
		cn1->setNext(cn2);
		cn2->setNext(cn3);
		cn3->setNext(cn4);
		cn4->setNext(cn5);
		cn5->setNext(cn1);
		
		CycleNode *cur = cn1;
		while( cur != NULL ){
			if(cur->visited){
				CPPUNIT_ASSERT( cur->id == 1 );
				return;
			}
			cur->visited = true;
			cur = cur->next;
		}
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION(CycleNodeTest);
