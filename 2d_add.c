#include <stdio.h>
int main()
{
	int row,col;
	scanf("%d%d",&row,&col);
	int a[row][col],b[row][col],add[row][col],i,j;
	for( i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",*(a+i)+j);
	}
	printf("\nmatrix1\n");
	for(i=0;i<row;i++)
	{
		for( j=0;j<col;j++)
			printf("%d",*(*(a+i)+j));
		printf("\n");
	}
	for( i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",*(b+i)+j);
	}
	printf("\nmatrix1\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ",*(*(b+i)+j));
		printf("\n");
	}

	printf("\nadd matrix1\n");
	for( i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			*(*(add+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);

	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ",*(*(add+i)+j));
		printf("\n");
	}


	return 0;
}
