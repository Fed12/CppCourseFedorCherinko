#include <stdio.h>
#include <stdlib.h>

void f(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int left = x3;
    if(x1 > x3) left = x1;
    int top = y4;
    if(y2 > y4) top = y2;
    int right = x4;
    if(x2 > x4) right = x2;
    int bottom = y3;
    if(y1 > y3) bottom = y1;

    int width = right - left;
    int height = top - bottom;

    if (width < 0 || height < 0) {
    	printf("Kvadraty ne peretinayyutsa");
    	printf("\n");
        return;
    }
		printf("Kvadraty peretinayyutsa");
    	printf("\n");
    return;
}

int main(int argc, char *argv[]) {
	int x1, y1, x2, y2, x3, y3, x4, y4;
	printf("Enter x1-x4, y1-y4: ");
	scanf("%d", &x1);
	scanf("%d", &x2);
	scanf("%d", &x3);
	scanf("%d", &x4);
	scanf("%d", &y1);
	scanf("%d", &y2);
	scanf("%d", &y3);
	scanf("%d", &y4);
	f(x1, y1, x2, y2, x3, y3, x4, y4);
	
	return 0;
}
