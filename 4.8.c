#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int m;
	printf("Enter m: ");
	scanf("%d", &m);
	int k = 0;
	for(int i = 0; i <= m; i++) {
		if(pow(4, i) > m) {
			break;
		}
		k = i;
	}
	printf("%d", k);
	
	return 0;
}
