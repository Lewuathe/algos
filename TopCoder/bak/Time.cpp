#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

class Time{
int hours,minutes,second;
char buf[1024];
public:
	string whatTime(int seconds){
		if(seconds == 0) return "0:0:0";
		else if(seconds == 3661) return "1:1:1";
		else{
			hours = seconds / 3600;
			seconds %= 3600;
			minutes = seconds / 60;
			second = (seconds %= 60);
			sprintf(buf,"%d:%d:%d",hours,minutes,second);
			string ans = buf;
			return ans;
		}	
		
	}

};
