#include <cstring>
#include <iostream>

bool isAnagram( char *str1, char *str2 ){
	int charNums[26*2];
	memset(charNums, 0, sizeof(int)*26*2);
	int i = 0;
	while( str1[i] != '\0' ){
		charNums[str1[i] - 'A']++;
		i++;
	}

	i = 0;
	while( str2[i] != '\0' ){
		charNums[str2[i] - 'A']--;
		i++;
	}

	for( i = 0 ; i < 26*2 ; i++ ){
		if( charNums[i] != 0 ){
			return false;
		}
	}
	return true;
}
