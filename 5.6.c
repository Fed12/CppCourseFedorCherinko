#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	double b = 4*n+2;
	for(int k = 1; k <= n; k++) {
		b = 4*(n-k)+2+(double)(1/b);
	}
	printf("%f", b);
	return 0;
}
