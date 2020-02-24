#include<stdio.h>
void main(){
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("value of a is = %d\n value of b is = %d\n",a,b);
}