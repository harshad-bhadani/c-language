#include<stdio.h>

int main()

{
	int even=0,odd=0,a[12];

	for(int i=0; i<12; i++)
	{
		printf("Enter value a[%d]:",i);
		scanf("%d",&a[i]);
	}

	for(int i=0; i<12; i++)
	{
		if(a[i]%2==0)
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

	return 0;
}