#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	printf("Enter a: ");
	scanf("%d", &a);
	double num = 1;
	double sum = 1;
	int ind = 2;
	do {
		num += (double)1/ind;
		ind++;
		sum += num;
	} while(sum < a);
	printf("%f", sum);
	printf("\n");
	for(int i = 1; i <= 100000; i++) {
		double sum = 0;
		for(int j = 1; j <= i; j++) {
			sum += (double)1/j;
		}
		if(sum > (double)a) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
