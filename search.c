#include <stdio.h>
#define N 5
void main()
{
	int a[N];
	for(int j=0;j<N;j++)
	{
	scanf("%d",&a[j]);
	}
	int elem,temp=0;
	printf("enter the element to search");
	scanf("%d",&elem);
	int *p=a;
	for(int i=0;i<N;i++)

		if(*(p+i)==elem)
		{
		printf("element is found");
			temp=1;
		}
	if(temp==0)
		printf("element is not found");

}
