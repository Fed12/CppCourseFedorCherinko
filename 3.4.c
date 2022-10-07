#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2;
	printf("Enter num1 and num2: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	long result = (long)num1*num2;
	printf("%ld", result);
	return 0;
}
