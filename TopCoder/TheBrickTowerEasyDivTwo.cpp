// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
/*
John and Brus are building towers using toy bricks.
They have two types of bricks: red and blue ones.
The number of red bricks they have is redCount and each of them has a height of redHeight.
The number of blue bricks they have is blueCount and each of them has a height of blueHeight.



A tower is built by placing bricks one atop another.
A brick can be placed either on the ground, or on a brick of a different color.
(I.e., you are not allowed to put two bricks of the same color immediately on one another.)
A tower has to consist of at least one brick.
The height of a tower is the sum of all heights of bricks that form the tower.
Two towers are considered to be different if they have different heights.
(Two towers of the same height are considered the same, even if they differ in the number and colors of bricks that form them.)



You are given the ints redCount, redHeight, blueCount and blueHeight.
Return the number of different towers that John and Brus can build.



DEFINITION
Class:TheBrickTowerEasyDivTwo
Method:find
Parameters:int, int, int, int
Returns:int
Method signature:int find(int redCount, int redHeight, int blueCount, int blueHeight)


CONSTRAINTS
-redCount will be between 1 and 47, inclusive.
-redHeight will be between 1 and 47, inclusive.
-blueCount will be between 1 and 47, inclusive.
-blueHeight will be between 1 and 47, inclusive.


EXAMPLES

0)
1
2
3
4

Returns: 4

John and Brus have 1 red brick of height 2 and 3 blue bricks of height 4. Using these bricks, it's possible to build 4 towers:
red (height 2);
blue (height 4);
red, blue (height 6);
blue, red, blue (height 10).

1)
4
4
4
7

Returns: 12



2)
7
7
4
4

Returns: 13



3)
47
47
47
47

Returns: 94

*/	   




// END CUT HERE
#line 89 "TheBrickTowerEasyDivTwo.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TheBrickTowerEasyDivTwo {
	public:
	vector<int> towerHeights;
	int find(int redCount, int redHeight, int blueCount, int blueHeight) {
		towerHeights.push_back(redHeight);
		if( redHeight != blueHeight ){
			towerHeights.push_back(blueHeight);
		}
		this->pile(redCount, redHeight, blueCount, blueHeight, 0);
	    this->pile(redCount, redHeight, blueCount, blueHeight, 1);
		return (int)towerHeights.size();

		return 1;
	}

	void pile(int redCount, int redHeight, int blueCount, int blueHeight,int start){
		// from red
		int pileHeight = 0;
		int order = start;
		while(1){
			if( order % 2 == 0 ){
				if( redCount <= 0 ){
					break;
				}
				else{
					pileHeight += redHeight;
					redCount--;
					if( !this->findSameTower(pileHeight) ){
						towerHeights.push_back(pileHeight);
					}
					order++;
				}
			}
			else{
				if( blueCount <= 0 ){
					break;
				}
				else{
					pileHeight += blueHeight;
					blueCount--;
					if( !this->findSameTower(pileHeight) ){
						towerHeights.push_back(pileHeight);
					}
					order++;
				}
			}
		}
	}
	bool findSameTower(int height){
		vector<int>::iterator pos;
		pos = ::find(towerHeights.begin(), towerHeights.end(), height);
		if( pos == towerHeights.end() ){
			return false;
		}
		else{
			return true;
		}
	}
};
