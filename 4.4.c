#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	int x;
	printf("Enter n, x: ");
	scanf("%d", &n);
	scanf("%d", &x);
	int res = 0;
	for(int i = 1; i <= n; i++) {
		res += i*pow(x, i);
	}
	printf("%d", res);
	
	
	return 0;
}
