#include<stdio.h>
void ArmstrongNo(int num);
void main(){
	int num;
	scanf("%d",&num);
	ArmstrongNo(num);
}
void ArmstrongNo(int num){
	int i,j,r,sum=0;
	for ( i = 1; i <= num; ++i)
	{    j=i; 
		while(j>=0){
			r=j%10;
			j=j/10;
			sum=sum+r*r*r;
		}
		if(i==sum){
			printf("%d",i);
		}
	}
}