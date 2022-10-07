#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int r = 0;
	for(int i = n; i >= 0; i--) {
		if(pow(2, i) < n) {
			break;
		}
		r = i;
	}
	printf("%d", r);
	
	return 0;
}
