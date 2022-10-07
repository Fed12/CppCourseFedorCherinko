#include <stdio.h>
#include <stdlib.h>

int f(int number)
{
    if (number == 0)
        return 0; 
    if (number == 1)
        return 1;
    return f(number-1) + f(number-2);
}

int main(int argc, char *argv[]) {
	int n, a;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter a: ");
	scanf("%d", &a);
	printf("%d", f(n));
	printf("\n");
	int num = 1;
	do {
		num++;
	} while(f(num) < a);
	printf("%d", num);
	printf("\n");
	printf("%d", num+1);
	printf("\n");
	
	int sum = 0;
	num = 1;
	while(sum < 1000) {
		sum += f(num);
		num++;
	}
	printf("%d", sum-f(num));
	printf("\n");
	return 0;
}
