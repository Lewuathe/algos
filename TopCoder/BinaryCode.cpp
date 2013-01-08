#line 88 "BinaryCode.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BinaryCode {
	public:
	vector <string> decode(string message) {
		vector<string> vec(10);
		for( int i = 0 ; i < 10 ; i++ ){
			vec[i] = message;
		}
		return vec;
	}
};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
