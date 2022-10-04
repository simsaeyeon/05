#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x,y;
	int result;
	char op;
	
	printf("enter the calculation :");
	scanf("%d %c %d",&x,&op,&y);
	
	if (op=='+') //+인 경우 
		result= x + y;
	else if (op=='-') //-인 경우 
		result=x - y;
	else if (op=='*') //*인 경우 
		result=x * y;
	else if (op=='/') ///인 경우 
		result=x / y;
			
	printf("= %d\n",result);
}
