#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, d, p;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter d: ");
	scanf("%d", &d);
	printf("Enter p: ");
	scanf("%d", &p);
	int years = 0;
	while(d < p) {
		int percentSum = d * a / 100;
		d += percentSum;
		d += b;
		years++;
	}
	printf("%d years", years);
	
	return 0;
}
