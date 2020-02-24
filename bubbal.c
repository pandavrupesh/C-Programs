#include<stdio.h>
void main(){
int a[50];
int n,t;
printf("Enter number of element ");
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);}
for(int i=0;i<=n;i++){
for(int j=i+1;j<=n;j++){
if(a[i]>a[j])
t=a[i];
a[i]=a[j];
a[j]=t;
}}
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}