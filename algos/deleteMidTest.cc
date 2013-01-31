#include "deleteMid.cc"
#include <cstring>
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class deleteMidTest : public TestFixture{
	CPPUNIT_TEST_SUITE(deleteMidTest);
	CPPUNIT_TEST(test1);
	CPPUNIT_TEST(test2);
	CPPUNIT_TEST_SUITE_END();

	void test1(){
		char ansString[64];
		char idString[8];
		memset(ansString, '\0', sizeof(char) * 64);
		memset(idString, '\0', sizeof(char) * 8);
		Node *n1 = new Node(1);
		Node *n2 = new Node(2);
		Node *n3 = new Node(3);
		Node *n4 = new Node(4);
		Node *n5 = new Node(5);


		n1->setNext(n2);
		n2->setNext(n3);
		n3->setNext(n4);
		n4->setNext(n5);

		deleteMid(n3);

		Node *cur = n1;

		while( cur != NULL ){
			sprintf(idString, "%d", cur->id);
			strcat(ansString, idString);
			cur = cur->next;
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "1245") );
	}

	void test2(){
		char ansString[64];
		char idString[8];
		memset(ansString, '\0', sizeof(char) * 64);
		memset(idString, '\0', sizeof(char) * 8);
		Node *n1 = new Node(1);
		Node *n2 = new Node(2);
		Node *n3 = new Node(3);
		Node *n4 = new Node(4);
		Node *n5 = new Node(5);


		n1->setNext(n2);
		n2->setNext(n3);
		n3->setNext(n4);
		n4->setNext(n5);

		deleteMid(n1);

		Node *cur = n1;

		while( cur != NULL ){
			sprintf(idString, "%d", cur->id);
			strcat(ansString, idString);
			cur = cur->next;
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "2345") );
	}
};
	
CPPUNIT_TEST_SUITE_REGISTRATION(deleteMidTest);
