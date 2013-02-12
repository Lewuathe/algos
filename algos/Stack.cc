#include <iostream>
#include "Node.cc"

class Stack{
private:
	Node *top;

public:
	Stack():top(NULL){};

	~Stack();

	void push(int value){
		Node *added = new Node(value);
		Node *preTop = top;
		added->setNext(preTop);
		top = added;
	}

	int pop(){
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


int main(void){
	Stack *st = new Stack();

	st->push(1);
	st->push(2);
	st->push(3);

	std::cout << st->pop() << std::endl;
	std::cout << st->pop() << std::endl;
	std::cout << st->pop() << std::endl;
	return 0;
}
