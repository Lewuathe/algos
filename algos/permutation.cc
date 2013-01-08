#include <iostream>

#define MAX_NUM 99

// From set {1,2,3,,,n}, select r factors. And display arrays in alphabetical order.

void genperm(int n, int r){
	int a[MAX_NUM+1];			// partial permutation array
	int d[MAX_NUM+1];			// if d[j] = 1, there have been 

	double		count;
	int			i,j;
	
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
			d[0] = 1;			// Banpei
			a[0] = 0;			// Banpei

			i = r;
			d[a[i]]++;			// 
			while( d[a[i]] < 2 ){
				i--;
				d[a[i]]++;
			}

			// if i = 0, there are no possibilities of using same numbers
			if( i == 0 ){
				for( i = 1 ; i <= r ; i++ ){
					printf("%2d ", a[i]);
				}
				std::cout << std::endl;
			}

			i		 = r;
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

int main(void){
	genperm(3,3);
	return 0;
}
