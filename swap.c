#include<stdio.h>
#define N 5
void swap(int *p,int *q)
{
int temp=0;
for(int i=0;i<N;i++)
{
temp=*(p+i);
*(p+i)=*(q+i);
*(q+i)=temp;
}
printf("\narr1\n");
for(int i=0;i<N;i++)
	printf("%d",*(p+i));
printf("\narr2\n");
for(int i=0;i<N;i++)
	printf("%d",*(q+i));
}
main()
{
int a1[N],a2[N];
for(int i=0;i<N;i++)
	scanf("%d",&a1[i]);
for(int i=0;i<N;i++)
	scanf("%d",&a2[i]);
swap(a1,a2);
}
