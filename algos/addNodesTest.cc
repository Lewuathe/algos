#include "addNodes.cc"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class addNodesTest : public TestFixture{
	CPPUNIT_TEST_SUITE(addNodesTest);
	CPPUNIT_TEST(test125plus256);
	CPPUNIT_TEST(test325plus9871);
	CPPUNIT_TEST_SUITE_END();

	void test125plus256(){
		Node *a1 = new Node(1);
		Node *a2 = new Node(2);
		Node *a3 = new Node(5);
		a1->setNext(a2);
		a2->setNext(a3);

		Node *b1 = new Node(2);
		Node *b2 = new Node(5);
		Node *b3 = new Node(6);
		b1->setNext(b2);
		b2->setNext(b3);

		Node *ans = addNodes( a1, b1 );

		char idString[8];
		char ansString[32];
		memset(idString,'\0', sizeof(char) * 8);
		memset(ansString, '\0', sizeof(char) * 32);
		while( ans != NULL ){
			sprintf(idString, "%d", ans->id);
			strcat(ansString, idString);
			ans = ans->next;
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "3711") );
	}

	void test325plus9871(){
		Node *a1 = new Node(3);
		Node *a2 = new Node(2);
		Node *a3 = new Node(5);
		a1->setNext(a2);
		a2->setNext(a3);

		Node *b1 = new Node(9);
		Node *b2 = new Node(8);
		Node *b3 = new Node(7);
		Node *b4 = new Node(1);
		b1->setNext(b2);
		b2->setNext(b3);
		b3->setNext(b4);

		Node *ans = addNodes( a1, b1 );

		char idString[8];
		char ansString[32];
		memset(idString,'\0', sizeof(char) * 8);
		memset(ansString, '\0', sizeof(char) * 32);
		while( ans != NULL ){
			sprintf(idString, "%d", ans->id);
			strcat(ansString, idString);
			ans = ans->next;
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "2132") );
	}

};

CPPUNIT_TEST_SUITE_REGISTRATION(addNodesTest);
