// C program to copy one array to another using pointers.
#include<stdio.h>
#include<stdlib.h>
#define N 5
void cpy(int *p1,int *p2)
{
for(int i=0;i<N;i++)
{
	*(p2+i)=(*(p1+i));
}
printf("\narr2\n");
for(int j=0;j<N;j++)
printf("%d ",*(p2+j));
}
int main()
{
int s1[N],s2[N];
for(int j=0;j<N;j++)
scanf("%d",&s1[j]);
cpy(s1,s2);
}
