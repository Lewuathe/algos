#include "Node.cc"

Node *kFromBack(Node *top, int k){
	int n = 0;
	Node *cur = top;
	while( cur != NULL ){
		n++;
		cur = cur->next;
	}
	
	Node *ret = top;
	for( int i = 0 ; i < n-k ; i++ ){
		ret = ret->next;
	}
	
	return ret;
}
