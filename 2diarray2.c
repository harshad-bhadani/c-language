#include<stdio.h>

int main()

{
	int c[3][3];
	int a[3][3]={2,3,4,5,6,7,3,4,5};
	int b[3][3]={2,3,5,5,6,7,3,4,5};
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d\t",a[i][j]);
			printf("%d",b[i][j]);	
			
			
		}
			printf("\n");
	}

		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);	
			
			
		}
			printf("\n");
	}

		return 0;
}