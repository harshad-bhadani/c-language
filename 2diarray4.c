#include<stdio.h>

int main()

{
	int a[3][3],k=1;
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d\t",k);
			k++;
		}
			printf("\n");
	}
		return 0;
}