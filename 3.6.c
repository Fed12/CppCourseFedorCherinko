#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a1, b1, c1;
	int a, b, c;
	printf("Enter a, b, c: ");
	scanf("%d", &a1);
	scanf("%d", &b1);
	scanf("%d", &c1);
	a = abs(a1);
	b = abs(b1);
	c = abs(c1);
	if(a >= b && a >= c) {
		printf("A is the biggest num");
		printf("\n");
	} else if(b >= a && b >= c) {
		printf("B is the biggest num");
		printf("\n");
	} else {
		printf("C is the biggest num");
		printf("\n");
	}
	
	
	if(a <= b && a <= c) {
		printf("A is minor num");
		printf("\n");
	} else if(b <= a && b <= c) {
		printf("B is minor num");
		printf("\n");
	} else {
		printf("C is minor num");
		printf("\n");
	}
	return 0;
}
