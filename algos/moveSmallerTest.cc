#include "moveSmaller.cc"
#include <cstring>
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class moveSmallerTest : public TestFixture {
	CPPUNIT_TEST_SUITE(moveSmallerTest);
	CPPUNIT_TEST(piv5);
	CPPUNIT_TEST(piv1);
	CPPUNIT_TEST_SUITE_END();

	void piv5(){
		char ansString[64];
		char idString[8];
		memset(ansString, '\0', sizeof(char) * 64);
		memset(idString, '\0', sizeof(char) * 8);
		Node *n1 = new Node(1);
		Node *n2 = new Node(2);
		Node *n3 = new Node(3);
		Node *n4 = new Node(4);
		Node *n5 = new Node(5);

		// 1 5 2 4 3
		n1->setNext(n5);
		n5->setNext(n2);
		n2->setNext(n4);
		n4->setNext(n3);
		
		
		Node *cur = moveSmaller(n1, 5);

		while( cur != NULL ){
			sprintf(idString, "%d", cur->id);
			strcat(ansString, idString);
			cur = cur->next;
		}
		CPPUNIT_ASSERT( !strcmp(ansString, "12435") );
	}

	void piv1(){
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

		Node *cur = moveSmaller(n1, 1);

		while( cur != NULL ){
			sprintf(idString, "%d", cur->id);
			strcat(ansString, idString);
			cur = cur->next;
		}

		CPPUNIT_ASSERT( !strcmp(ansString, "12345") );

	}

};


CPPUNIT_TEST_SUITE_REGISTRATION(moveSmallerTest);
