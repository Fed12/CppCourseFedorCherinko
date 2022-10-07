#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0;
    float a = 1.0;
    

    while(1.0 + a > 1.0)
    {
        a = a / 2.0;
        i++;
    }
    printf("%f", a);
	return 0;
}
