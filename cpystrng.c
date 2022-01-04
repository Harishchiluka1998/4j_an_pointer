
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50
void cpystrng(char *p1,char *p2,int n)
{
	for(int i=0;i<n;i++)
	{
		*(p2+i)=*(p1+i);
	}
	printf("\narr2\n");
	printf("%s",p2);
}
int main()
{
	char s1[N],s2[N];
	scanf("%s",s1);
	cpystrng(s1,s2,strlen(s1));
}
