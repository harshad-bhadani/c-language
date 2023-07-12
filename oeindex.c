#include<stdio.h>



int main()

{
	int a[12],even=0,odd=0;

	for(int i=0; i<12; i++)
	{
		printf("Enter value a[%d]:",i);
		scanf("%d",&a[i]);
	}

	for(int i=0; i<12; i++)
	{
		if(i%2==0)
		{
			even=even+a[i];
			printf("%d\n",a[i]);	
		}					
		else
		{
			odd=odd+a[i];
			printf("%d\n",a[i]);	
		}

	}

	printf("Even total:%d\t",even);
	printf("Odd total:%d\n",odd);

}