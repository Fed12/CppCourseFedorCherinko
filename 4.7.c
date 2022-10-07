#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
	int res = 1;
	for(int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

int main(int argc, char *argv[]) {
	int n, x;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%d", &x);
	double y = 1;
	for(int i = 1; i <= n; i++) {
		pow(x, i)/fact(i);
	}
	printf("%f", y);
	
	return 0;
}
