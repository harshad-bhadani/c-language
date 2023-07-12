#include<stdio.h>

int main()

{
	char a[100];
	char c[100];
	int n=0,b=1,i,j,k = 0;

	printf("Enter the name:"); 
	scanf("%s",&a);

	for(j=0; a[j]!='\0'; j++) 
	{
	}
	printf("\nlength is :%d",j);
	
	for(i=0; i<=j/2; i++)
	{

		
		c[k]=a[n];
		n++;
		k++;

		c[k]=a[j-b];
		b++;
		k++;

		if(n==j/2)
		{
			c[k]=a[n];
			n++;
			k++;
			break;
		}
		
		
	}

	c[k] = '\0';

	printf("\nString is: %s",c);
	return 0;
}