#include<stdio.h>
void main(){
	int num, orgNum, r,sum=0;
	scanf("%d",&num);
	orgNum=num;
	while(num!=0){
		r=num%10;
		num=num/10;
		sum=sum+r*r*r;
	}
	if (sum==orgNum)
	{
		printf("%d is Armstrong Number ",orgNum);
	}
	else
		printf("%d is not Armstrong number ", orgNum);
	
}