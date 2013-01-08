#include <iostream>

#define MAX_NUM 99

void genperm(int n, int r){
	int a[MAX_NUM+1];
	int d[MAX_NUM+1];

	int i,j,k;

	while(1){
		if( n <= 0 || n > MAX_NUM ){
			return;
		}
		a[1] = 1;
		for( j = 1 ; j <= n ; j++ ){
			d[j] = 0;
		}
		d[n+1] = 1;  // Banpei
		k = 1;

		while(1){
			if( d[a[k]] > 0 ){
				// if a[k] has already been shown.
				if( a[k] == n+1 ){
					k--;
					if( k < 1 ){
						return;
					}
					d[a[k]] = 0;
				}
				a[k]++;
			}
			else{
				// if a[k] has not been shown yet.
				d[a[k]] = 1;
				k++;
				a[k] = 1;
				if( k == n+1 ){
					for( i = 1 ; i <= r ; i++ ){
						printf("%2d ",a[i]);
					}
					putchar('\n');
					k--;
					d[a[k]] = 0;
					a[k]++;
				}
			}
		}
	}

}

int main(void){
	genperm(3,3);
	return 0;
}
