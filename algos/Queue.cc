#include <iostream>
#include "Node.cc"

class Queue{
private:
	Node *top;
public:

	Queue():top(NULL){};

	~Queue();

	void enqueue(int value){
		Node *added = new Node(value);
		Node *cur = top;
		if( top == NULL ){
			top = added;
		}
		else{
			while( cur->next != NULL ){
				cur = cur->next;
			}
			cur->setNext(added);
		}
	}

	int dequeue(){
		if( top == NULL ){
			throw "No value";
		}

		Node *ret = top;
		int retValue = ret->id;
		free(ret);

		top = top->next;
		return retValue;
	}
};

#if defined(MAIN_TEST)
int main(void){
	Queue *qu = new Queue();

	qu->enqueue(1);
	qu->enqueue(2);
	qu->enqueue(3);

	std::cout << qu->dequeue() << std::endl;
	std::cout << qu->dequeue() << std::endl;
	std::cout << qu->dequeue() << std::endl;
	return 0;
}
#endif
