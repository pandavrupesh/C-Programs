#include<stdio.h>
void Reverse(int num);
void main(){
	int num;
	scanf("%d",&num);
	Reverse(num);
}
void Reverse(int num){
	int rem, rev=0;
	while(num!=0){
		rem = num%10;
		num = num/10;
		rev = rem+rev*10;
	}
 printf("Reverse Number is %d" ,rev);
}
