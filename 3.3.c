#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2, num3;
	printf("Enter nums: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	if(abs(num1) < pow(2, 10) && abs(num2) < pow(2, 10), abs(num3) < pow(2, 10)) {
	printf("%d", num1*num2*num3);
	printf("\n");
}
	if(abs(num1) < pow(2, 21) && abs(num2) < pow(2, 21), abs(num3) < pow(2, 21)) {
	printf("%d", num1*num2*num3);
	}
	return 0;
}
