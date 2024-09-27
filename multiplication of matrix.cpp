#include <stdio.h>
int main()
{
  	int n=1;
  	while(n==1)
  	{
  			int a,b;
	printf("enter the number of rows first matrix:\n");
	scanf("%d",&a);
		printf("enter the number of coloum of first matrix:\n");
	scanf("%d",&b);
	
	int arr[a][b];
	printf("enter the elements of the first matrix:\n");
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
		int c,d;
	printf("enter the number of rows of second matrix:\n");
	scanf("%d",&c);
		printf("enter the number of coloum of second matrix:\n");
	scanf("%d",&d);
	
	int brr[c][d];
	printf("enter the elements of the second matrix:\n");
	for (int i=0;i<c;i++)
	{
		for (int j=0;j<d;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}
	
	if (b!=c)
	{
		printf("the multiplication of this two matrix is not possibel:\n");
	}
	
	else
	{
	int res[a][d];
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<d;j++)
		{
			res[i][j]=0;
			for (int k=0;k<b;k++)
			{
				res[i][j]+=arr[i][k]*brr[k][j];	
			}
		
		}
	}

	
	printf("multiplication of this two matrix is:\n");
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<d;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}

}
printf("\n");
printf("Do you want to maltiply another pair of matrices? Enter 1 for yes or 0 for no:\n");
scanf("%d",&n);
	  }
}
