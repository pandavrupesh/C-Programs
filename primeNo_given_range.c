#include<stdio.h>
void prime (int num);
void main(){
	int num;
	scanf("%d",&num);
	prime(num);
}
void prime (int num)
{
	for(int j=2;j<=num;j++)
	{
	int flag=1;
		for(int i=2;i<=j/2;i++)
		{
			if(j%i==0)
			{
				flag=0;
				break;
			}	
		}
	if(flag==1)
	{
		printf("%d ",j );
	}
	}
}