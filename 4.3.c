#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n = 3;
	int x = 2;
	int y1 = 0;
	for(int i = n; i >= 1; i--) {
		y1 += pow(x, i);
	}
	y1 += 1;
	n = 4;
	x = 2;
	int y = 3;
	int y2 = 0;
	for(int i = n; i >= 0; i--) {
		y2 += pow(pow(x, 2), i);
	}
	printf("%d", y1);
	printf("\n");
	printf("%d", y2);
	printf("\n");
	
	
	return 0;
}
