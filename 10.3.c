#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cnt=0,num;
	do{
		printf("\nEnter a number :");
		scanf("%d",&num);
		printf("No.is%d",num);
		cnt++;
		
	}   
	while (num !=0);
	printf("\n The total numbers entered were%d",--cnt);

	return 0;
}
