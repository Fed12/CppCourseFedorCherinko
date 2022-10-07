#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int maxCount = -1;
	int num = -1;
	for(int i = 1; i <= n; i++) {
		int count = 0;
		int a = i;
		while(a > 1) {
			if(a % 2 == 0) {
				a /= 2;
			} else a = 3*a+1;
			count++;
		}
		if(count > maxCount) {
			maxCount = count;
			num = i;
		}
	}
		printf("%d", num);
	
	return 0;
}
