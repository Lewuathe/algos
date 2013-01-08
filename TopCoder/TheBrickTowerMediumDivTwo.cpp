// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
/*
John and Brus just built some towers using toy bricks.
They now have n towers numbered 0 through n-1.
For each i, the height of the i-th tower (0-based index) is given in heights[i].



John and Brus want to arrange their towers into a line.
That is, the bottoms of the towers will all stand on the same line.
John and Brus don't like it when a tower falls down and knocks over another tower while falling.
To avoid this, they have to put their towers sufficiently far apart.
More precisely, the distance between any two neighboring towers must be at least equal to the maximum of their heights.
John and Brus would like to minimize the distance between the first and the last tower in the line.



You are given the vector <int> heights.
Return a vector <int> containing exactly n elements: the order in which the towers should be placed on the line.
For each i, the i-th element of the return value should be the number of the tower that will be placed i-th on the line.
If there is a tie (multiple solutions give the same minimal distance), return the lexicographically smallest order.



DEFINITION
Class:TheBrickTowerMediumDivTwo
Method:find
Parameters:vector <int>
Returns:vector <int>
Method signature:vector <int> find(vector <int> heights)


NOTES
-A vector <int> A is lexicographically smaller than a vector <int> B if it contains a smaller element at the first position where these vector <int>s differ.


CONSTRAINTS
-heights will contain between 1 and 7 elements, inclusive.
-Each element of heights will be between 1 and 47 inclusive.


EXAMPLES

0)
{4, 7, 5}

Returns: {0, 2, 1 }

There are six possible orderings, but only four of them have optimal distance 12 between the first and the last towers:

{0, 2, 1}
{1, 0, 2}
{1, 2, 0}
{2, 0, 1}

Among these orderings {0, 2, 1} is the lexicographically smallest one.


1)
{4, 4, 4, 4, 4, 4, 4}

Returns: {0, 1, 2, 3, 4, 5, 6 }

Towers may have equal heights.


2)
{2, 3, 3, 2}

Returns: {0, 3, 1, 2 }

Towers of height 2 have to be neighboring in the optimal ordering.

3)
{13, 32, 38, 25, 43, 47, 6}

Returns: {0, 6, 3, 1, 2, 4, 5 }

*/					
					

// END CUT HERE
#line 82 "TheBrickTowerMediumDivTwo.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TheBrickTowerMediumDivTwo {
	public:
	vector <int> find(vector <int> heights) {
		
	}
	void genperm(int n, int r){
		int a[MAX_NUM+1];   // partial permutation array
		int d[MAX_NUM+1];   // if d[j] = 1, there have been 
		
		double count;
		int i,j;
		
		while(1){
			if(  n <= 0 || (n > MAX_NUM) ){
				return;
			}
			
			for( i = 0 ; i <= r ; i++ ){
				a[i] = 1;
			}
			count = 0;
			
			while(1){
				//初期設定
				for( j = 0 ; j <= n ; j++ ){
					d[j] = 0;
				}
				d[0] = 1;  // Banpei
				a[0] = 0;  // Banpei
				
				i = r;
				d[a[i]]++;  // 
				while( d[a[i]] < 2 ){
					i--;
					d[a[i]]++;
				}
				
				// if i = 0, there are no possibilities of using same numbers
				if( i == 0 ){
					for( i = 1 ; i <= r ; i++ ){
						
					}
					std::cout << std::endl;
				}
				
				i = r;
				a[i]++;
				while( a[i] > r ){
					// increasing in digit
					a[i] = 1;
					i--;
					a[i]++;
				}
				
				if( i == 0 ){
					return;
				}
			}
		}
	}
};
