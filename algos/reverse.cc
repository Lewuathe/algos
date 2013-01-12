#include <cstring>

char* reverse( char *str ){
	int len = strlen(str);
	for( int i = 0 ; i < len / 2 ; i++ ){
		char tmp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = tmp;
	}
	return str;
}


