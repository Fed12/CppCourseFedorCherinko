#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	int odinits = num % 10;
	num /= 10;
	int desiatkiv = num % 10;
	num /= 10;
	int soten = num;
    if(soten != desiatkiv && desiatkiv != odinits) {
    	printf("%d%d%d", odinits, desiatkiv, soten, "\n");
    	printf("\n");
    	printf("%d%d%d", odinits, soten, desiatkiv, "\n");
    	printf("\n");
    	printf("%d%d%d", desiatkiv, odinits, soten, "\n");
    	printf("\n");
    	printf("%d%d%d", desiatkiv, soten, odinits, "\n");
    	printf("\n");
    	printf("%d%d%d", soten, odinits, soten, "\n");
    	printf("\n");
    	printf("%d%d%d", soten, soten, odinits, "\n");
    	printf("\n");
	}
	return 0;
}
