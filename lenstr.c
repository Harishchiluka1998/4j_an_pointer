
#include<stdio.h>
#include<stdlib.h>
#define N 50
void len(char *p1)
{
	printf("length=");
int cnt=0;
	while(*p1!='\0')
	{
cnt++;
p1++;
	}
	printf("%d",cnt);
}
int main()
{
char s1[N],s2[N];
scanf("%s",s1);
len(s1);
}
