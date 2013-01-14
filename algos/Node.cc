#include <iostream>

class Node{
public : 
	Node *next;
	int id;

	Node(int i){
		id = i;
		next = NULL;
	}

	~Node();

	Node *getNext(){
		return next;
	}

	void setNext(Node *n){
		next = n;
	}
};


