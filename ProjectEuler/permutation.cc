#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

static string nthBase(int n, int nth);

vector<int> genPermutation(int n, int r) {
  int last = pow(n, r);
  
  for( int i = 0 ; i < last ; i++ ) {
    cout << nthBase(i, n) << " ";
  }
}


static string nthBase(int n, int nth) {
  string res;
  int quotient = n;
  int remainder;
  if( n == 0 ) {
    return "0";
  }

  while( quotient > 0 ) {
    stringstream ss;
    quotient  = n / nth;
    remainder = n % nth;
    ss << remainder;
    res = ss.str().append(res);
    n = quotient;
  }

  return res;
}
