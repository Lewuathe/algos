#include <iostream>

using namespace std;

bool getBit(int num, int i){
	return ((num & (1 << i)) != 0);
}

int setBit(int num, int i){
	return num | (1 << i);
}

int main(void){
	cout << getBit(4, 0) << endl;
	cout << getBit(4, 1) << endl;
	cout << getBit(4, 2) << endl;
	cout << setBit(4, 1) << endl;
	cout << (4 << 2) << endl;
	return 0;
}
