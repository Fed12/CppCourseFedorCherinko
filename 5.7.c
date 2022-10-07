#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	double S = 0;
	double a[n+1];
	double b[n+1];
	a[1] = 0;
	a[2] = 1;
	b[1] = 1;
	b[2] = 0;
	for(int i = 3; i <= n; i++) {
		double k = (double)i;
		b[i] = b[i-1]+a[i-1];
		a[i] = a[i-1]/k + a[i-2]*b[i];
		S += pow(2, i) / (a[i]+b[i]);
	}
	printf("%f", S);
	return 0;
}
