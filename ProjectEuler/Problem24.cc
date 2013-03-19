#include <iostream>
#include <cstdio>
#include <vector>
#include "permutation.cc"

using namespace std;



int main(int argc, char *argv[]) {
  vector<string> t = genPermutation(3,2);
  for( int i = 0 ; i < t.size() ; i++ ) {
    printf("%02s ", t[i].c_str());
  }
}
