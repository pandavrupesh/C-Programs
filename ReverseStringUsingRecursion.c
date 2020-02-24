		#include<stdio.h>
		void ReverseString(char *x, int begin, int end);
		void main(){
			char str[1000];
			int end, c=0;
			//scanf("%s",str);
			gets(str);
			while(str[c]!='\0')
				c++;
			end=c-1;
			ReverseString(str, 0, end);
			printf("%s",str );
		}
		void ReverseString(char *x, int begin, int end){
			char c;
			if(begin >= end)
				return;
				c = *(x + begin);
			*(x + begin) = *(x + end);
			*(x + end) = c;
			ReverseString(x, ++begin, --end);
		}
// #include <stdio.h>
// #include <string.h>
// void reverse(char *x, int begin, int end)
// {
// char c;
// if (begin >= end)
// return;
// c = *(x + begin);
// *(x + begin) = *(x + end);
// *(x + end) = c;
// reverse(x, ++begin, --end);
// }
// int main()
// {
// char a[100];
// scanf("%s", a);
// reverse(a, 0, strlen(a) - 1);
// printf("%s",a);
// return 0;
// }