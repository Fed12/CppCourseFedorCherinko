#include <stdio.h>
#include <stdlib.h>

int ReLu(int x) {
	if(x > 0) return x;
	else return 0;
}

int pohidna(int x) {
	//Позідна числа = 0
	return 0;
}

int main(int argc, char *argv[]) {
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("%d", ReLu(x));
	
	return 0;
}
