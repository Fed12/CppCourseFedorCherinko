#include <stdio.h>
#include <stdlib.h>

double sinN(int x, int n) {
	if(n==1) return sin(n);
	else return(sinN(x, --n));
}

int main(int argc, char *argv[]) {
	int n, x;
	printf("Enter n, x: ");
	scanf("%d", &n);
	scanf("%d", &x);
	double sinus = sinN(x, n);
	printf("%f", sinus);
	
	return 0;
}
