#include<stdio.h>
void swap(int a ,int b);
void main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("value before swap is a = %d \t b = %d \n",a,b );
	swap(a,b);
}
 /*void swap(int a, int b){
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("value of a is= %d \n value of b is = %d",a,b);
 }*/
void swap (int a,int b){
	a=a*b;
	b=a/b;
	a=a/b;
	printf("value after swap is a = %d \t b = %d",a,b);
}