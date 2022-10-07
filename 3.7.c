#include <stdio.h>
#include <stdlib.h>

int sqrtX(double a, double b, double c)
{
	double x1, x2;
  if (!a)
  {
    if (b)
    { 
      return 1;
    } 
    return 0;
  }
  
  double d = b * b - 4 * a * c;
  if (d < 0) return 0;
  
  return d ? 2 : 1;
}

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("Enter a, b, c: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int count = sqrtX(a, b, c);
	printf("count: %d", count);
	
	return 0;
}
