#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 6 //总共牌数

int Deal(int number[N])//发牌 
{
	int i; 
	srand((int)time(NULL));
	for(i=0;i<N;i++)
	{
		number[i]= rand()%12+1; printf("%d ",number[i]);
	}
	printf("\n");
	return 0;
}
int Count(int number[N])//计数  
{
	int i,player1=0,player2=0;
	for(i=0;i<N/2;i++)player1+=number[i];
	for(i=N/2+N%2;i<N;i++)player2+=number[i];
	printf("player1 is %d	player2 is %d\n ",player1,player2);
	
	if(player1>player2)      return 1;
	else if(player1<player2) return 2;
	else return 0;
	
}
int main() 
{
	int number[N];//记录n张从左至右的数字 
	Deal(number); //发牌
	printf("\n %d",Count(number));//计数 宣布结果 
		 	  	
}
