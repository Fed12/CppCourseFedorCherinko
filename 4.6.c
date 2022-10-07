#include <stdio.h>
#include <stdlib.h>

double sqrtN(int x, int n) {
	if(n==1) return sqrt(n);
	else return(sqrtN(x, --n));
}

double sqrt2(int x, int n, int num) {
	if(num==n) return sqrt(num);
	else return sqrt2(x*n, n, ++num);
}

int main(int argc, char *argv[]) {
	int n, x;
	printf("Enter n: ");
	scanf("%d", &n);
	double koren = sqrtN(2, n);
	double koren2 = sqrt2(3, n, 1);
	printf("%f", koren);
	printf("\n");
	printf("%f", koren2);
	
	return 0;
}
