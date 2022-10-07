#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x[100];
	x[1] = -99;
	x[2] = -99;
	x[3] = -99;
	for(int i = 4; i <= 1000; i++) {
		x[i] = x[i-1]+x[i-3] + 100;
		if(x[i] > 0) {
			printf("%d", i);
			printf("\n");
			break;
		}
	}
	return 0;
}
