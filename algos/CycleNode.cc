#include <iostream>
#include "Node.cc"

class CycleNode : public Node{
public:
	bool visited;
	CycleNode *next;
	
	CycleNode(int i): Node(i){
		visited = false;
	};

	~CycleNode(){};

	CycleNode *getNext(){
		return next;
	}

	void setNext(CycleNode *n){
		next = n;
	}
};

#ifdef IS_MAIN_TEST
int main(void){
	CycleNode *cn1 = new CycleNode(1);
	CycleNode *cn2 = new CycleNode(2);
	CycleNode *cn3 = new CycleNode(3);
	CycleNode *cn4 = new CycleNode(4);
	CycleNode *cn5 = new CycleNode(5);

	cn1->setNext(cn2);
	cn2->setNext(cn3);
	cn3->setNext(cn4);
	cn4->setNext(cn5);
	cn5->setNext(cn1);

	CycleNode *cur = cn1;
	while( cur != NULL ){
		if(cur->visited){
			std::cout << "Visited: " << cur->id << std::endl;
			exit(0);
		}
		cur->visited = true;
		cur = cur->next;
	}
}
#endif
