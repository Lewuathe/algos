#include <cstring>
#include <iostream>
#include <cstdlib>

void compStr(char *org, char *comp){
	int orgLen = strlen(org);
	char preCh;
	int compIndex = 0;
	char curCh = org[0];
	int curCounter = 0;

	for( int i = 1 ; i < orgLen ; i++ ){
		curCh = org[i];
		preCh = org[i-1], curCounter++;
		if( curCh != preCh ){
			comp[compIndex++] = preCh;
			if( curCounter != 1 ){
				char buf[4];
				sprintf(buf, "%d", curCounter);
				int len = strlen(buf);
				strcat(comp, buf);
				compIndex += len;
			}
			curCounter = 0;
		}
	}
	

	if( curCh != preCh ){
		comp[compIndex++] = curCh;
	}
	else{
		curCounter++;
		comp[compIndex++] = curCh;
		char buf[4];
		sprintf(buf, "%d", curCounter);
		int len = strlen(buf);
		strcat(comp, buf);
		compIndex += len;
	}
	if( strlen(comp) >= orgLen ){
		comp = org;
	}
}		
