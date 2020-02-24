#include<stdio.h>
void main(){
	int c=0,l=0;
char s [100];
scanf("%s",s);
for(int i=0;s[i]!='\0';i++)
	l++;
for (int i = 0; i < l; ++i)
{
if(s[i]!=s[l-i-1]){
	c++;
	break;
}
}
 if(c==1)
 	printf("string is not palendrom %s",s );
 else
 	printf("string is palendrom %s\n", s);

}