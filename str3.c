#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	char b[30];
	int i,j;

	printf("Enter the first name:");
	scanf("%s",&a);
	printf("Enter the second name:");
	scanf("%s",&b);	

	for(i=0; a[i]!='\0'; i++)
	{
	}
	a[i]=' ';
	i++;
	for(j=0; b[j]!='\0'; j++)
	{
		a[i]=b[j];
		i++;
	}
		a[i]='\0';
		printf("full name:%s",a);
	return 0;


}