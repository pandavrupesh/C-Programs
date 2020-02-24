#include<stdio.h>
void Factorial(int num);
void main(){
	int num;
	scanf("%d",&num);
	Factorial(num);
}
void Factorial(int num){
	long int fact=1;
	if(num>0){
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("%d",fact);
}
}