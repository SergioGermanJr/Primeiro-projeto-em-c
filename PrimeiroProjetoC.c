#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, x, c, conta;
	
	
	printf("DIGITE NUMERO DA BASE: ");
	scanf("%d", &c);
	
	
 	for (i = 1; i <= c; i++) {
 		
 		for(x = 1; x <= i; x++){
 			printf("x");
 			conta++;
 			
		 }
    printf("\n");
 	} 
	
	printf("A AREA DO TRIANGULO IGUAL A %d\n", conta);
	
	
	
	return 0;
}
