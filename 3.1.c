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
     printf("oditins: %d", odinits);
     printf("\n");
         printf("desiativ: %d", desiatkiv);
            printf("\n");
             printf("soten: %d", soten);
                printf("\n");
                	printf("sum =  %d", odinits+desiatkiv+soten);
                	 printf("\n");
                int num2 = odinits * 100 + desiatkiv*10 + soten;
				printf("reverse num =  %d", num2);
                	 printf("\n");	 
	return 0;
}
