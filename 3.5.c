#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b;
	printf("Enter a and b: ");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>b) {
		printf("A is bigger than B");
		printf("\n");
		printf("B is less than A");
		printf("\n");
	} else if(b>a){
		printf("B is bigger than A");
		printf("\n");
		printf("A is less than B");
		printf("\n");
	} else {
		printf("A is equal to B");
	}
	return 0;
}
