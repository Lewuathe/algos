#include "Node.cc"

#include <iostream>
Node *moveSmaller(Node *top, int piv){
	Node *smaller = NULL, *smallTop = NULL;
	Node *bigger  = NULL , *bigTop = NULL;
	Node *cur = top;

	while( cur != NULL ){
		if( cur->id < piv ){
			if( !smallTop ){
				smallTop = cur;
				smaller = cur;
			}
			else{
				smaller->setNext(cur);
				smaller = smaller->next;
			}
		}
		else{
			if( !bigTop ){
				bigTop = cur;
				bigger = cur;
			}
			else{
				bigger->setNext(cur);
				bigger = bigger->next;
			}
		}
		cur = cur->next;
	}
	if( smaller != NULL ){
		smaller->setNext(bigTop);
		bigger->next = NULL;
		return smallTop;
	}
	else{
		bigger->next = NULL;
		return bigTop;
	}
}
