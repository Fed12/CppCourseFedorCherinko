#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	long fact1 = 1;
	long fact2 = 1;
	for(int i = 1; i <= n; i++) {
		fact1 *= i;
	}
	for(int i = n; i >= 1; i--) {
		fact2 *= i;
	}
	printf("%ld", fact1);
	printf("\n");
	printf("%ld", fact2);
	printf("\n");
	
	return 0;
}
