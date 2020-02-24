#include<stdio.h>
void prime(int num);
void main(){
	int num;
	scanf("%d",&num);
	prime(num);
}
void prime(int num){
	int flag=1;
	for (int i = 2; i < num/2; ++i)
	{
		if(num%i==0){
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("prime No is  %d ",num );
	}
	else
		printf("number is not prime no %d", num);
}