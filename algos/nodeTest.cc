#include "Node.cc"

int main(void){
	Node *n1 = new Node(1);
	Node *n2 = new Node(2);
	Node *n3 = new Node(3);

	n1->setNext(n2);
	n2->setNext(n3);

	Node *cur = n1;
	while( cur != NULL ){
		std::cout << cur->id << std::endl;
		cur = cur->next;
	}

	return 0;
}
