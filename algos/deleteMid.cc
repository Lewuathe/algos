#include "Node.cc"

void deleteMid(Node *mid){
	// Copy next node to the mid node itself
	Node *next = mid->next;
	mid->id = next->id;
	mid->next = next->next;
}
