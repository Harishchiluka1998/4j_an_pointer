#include<stdio.h>
#include<stdlib.h>
#define N 5
void reverse(int *p1,int *p2)
{
for(int i=0,j=N-1;i<N;i++,j--)
{
	*(p2+i)=(*(p1+j));
}
printf("\narr\n");
for(int k=0;k<N;k++)
printf("%d ",*(p2+k));
}
int main()
{
int s1[N],s2[N];
for(int j=0;j<N;j++)
scanf("%d",&s1[j]);
reverse(s1,s2);
}
