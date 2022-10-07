#include <stdio.h>
#include <stdlib.h>

double fact(int n) {
	int res = 1;
	if(n % 2 == 0) {
		for(int i = 2; i <= n; i += 2) {
			res *= i;
		}
	} else {
			for(int i = 1; i <= n; i += 2) {
			res *= i;
		}
	}
	return res;
}

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int res = fact(n);
	printf("%d", res);
	
	
	return 0;
}
