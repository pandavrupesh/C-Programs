#include<stdio.h>
void fibo(int num);
void main(){
	int num;
	scanf("%d",&num);
	fibo(num);
}
void fibo(int num){
	int a=0, b=1, temp=0;
	while(temp < num){
		printf("%d ",a);
		temp=a+b;
		a=b;
		b=temp;
	}
	printf("%d",a);
}