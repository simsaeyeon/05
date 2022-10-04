#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int trial=0; //시도횟수 
	
	do
	{
		printf("Guess a number : ");//입력해라 문구 출력
		scanf("%d",&x);//입력을 받음 (scanf)
		if ( x > answer) //입력 숫자가 정답보다 큰지 작은지 출력(조건문으로 high? low?)
			printf("low!\n");
		else if (x<answer)
			printf("high!\n");
		trial++;	
	}
	while (x!=answer); // 정답하고 같은지 여부를 확인 (같으면 while문 벗어나야함) 
	
	printf("Congratulation! trials :%d\n",trial);//시도 횟수 출력 
}
