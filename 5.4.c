#include <stdio.h>
#include <stdlib.h>

int fact(int n)    
{    
if(n<0)    
return(-1);
if(n==0)    
return(1);
else    
{    
return(n*fact(n-1)); 
}
}    

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	double p1 = 1;
	double p2 = 1;
	int ind = 1;
	while(ind <= n) {
		p1 *= 1 + (double)(1/fact(ind));
		p2 *= 1 + (pow(-1, ind)*ind*ind)/pow(2, ind);
		ind++;
	}
	printf("%f", p1);
	printf("\n");
	printf("%f", p2);
	return 0;
}
