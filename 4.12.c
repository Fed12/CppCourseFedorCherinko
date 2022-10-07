#include <stdio.h>
#include <stdlib.h>

int result(int n, int x) {
	double y = 0;
	for(int i = n; i >= 0; i--) {
		y += pow(pow(x, 2), i);
	}
	return y;
}

int main(int argc, char *argv[]) {
	int n, x;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%d", &x);
	printf("%d", result(n, x));
	
	return 0;
}
