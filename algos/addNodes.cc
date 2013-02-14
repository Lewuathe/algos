#include <iostream>
#include "Node.cc"

Node *addNodes(Node *n1, Node *n2){
	int tmp = 0, carry = 0;
	Node *ret = NULL, *retTop;
	Node *c1 = n1;
	Node *c2 = n2;

	while( c1 != NULL && c2 != NULL ){
		tmp = c1->id + c2->id + carry;
		if( ret == NULL ){
			ret = new Node(tmp%10);
			retTop = ret;
		}
		else{
			ret->setNext( new Node(tmp%10) );
			ret = ret->next;
		}
		carry = tmp / 10;
		c1 = c1->next;
		c2 = c2->next;
	}

	Node *rest = c1 != NULL ? c1 : c2;
	while( rest != NULL ){
		tmp = rest->id + carry;
		ret->setNext( new Node(tmp%10) );
		ret = ret->next;
		carry = tmp/10;

		rest = rest->next;
	}
	
	if( carry > 0 ){
		ret->setNext( new Node(carry) );
	}
	
	return retTop;
}


