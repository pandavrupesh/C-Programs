#include<stdio.h>
void Fibo(int num);
void main(){
	int num;
	scanf("%d",&num);
	Fibo(num);
}
void Fibo(int num){
	int temp, a=0, b=1;
	for(int i=0;i<=num;i++){
      printf("%d ",a);
      temp =a+b;
      a=b;
      b=temp;
	}
}