#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int trial=0; //�õ�Ƚ�� 
	
	do
	{
		printf("Guess a number : ");//�Է��ض� ���� ���
		scanf("%d",&x);//�Է��� ���� (scanf)
		if ( x > answer) //�Է� ���ڰ� ���亸�� ū�� ������ ���(���ǹ����� high? low?)
			printf("low!\n");
		else if (x<answer)
			printf("high!\n");
		trial++;	
	}
	while (x!=answer); // �����ϰ� ������ ���θ� Ȯ�� (������ while�� �������) 
	
	printf("Congratulation! trials :%d\n",trial);//�õ� Ƚ�� ��� 
}
