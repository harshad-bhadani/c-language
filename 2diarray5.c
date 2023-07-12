#include<stdio.h>

int main()

{
	int di=0,up=0,lo=0;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
			printf("\n");
	}
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i==j)
			{
				di=di+a[i][j];
			}
			else
			if(i<=j)
			{
				up=up+a[i][j];
			}
			else
			if(i>=j)
			{
				lo=lo+a[i][j];
			}
		}
		
	}

      	printf("diagonal total:%d\n",di);
printf("upper total:%d\n",up);
printf("lower total:%d\n",lo);
		return 0;

}