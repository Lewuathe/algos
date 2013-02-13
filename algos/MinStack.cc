#include "Stack.cc"

class MinStack{
private:
	Stack *minSt;
	Stack *dataSt;

public:

	MinStack(){
		minSt  = new Stack();
		dataSt = new Stack();
	}

	~MinStack();

	void push(int value){
		dataSt->push(value);
		if( minSt->isEmpty() ){
			minSt->push(value);
		}
		else{
			if( minSt->peek() >= value ){
				minSt->push(value);
			}
		}
	}

	int pop(){
		if( dataSt->peek() == minSt->peek() ){
			minSt->pop();
		}
		return dataSt->pop();
	}

	int min(){
		return minSt->peek();
	}


};
