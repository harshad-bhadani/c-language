#include<stdio.h>


int pr()
{
	int num,sum=0,i;
	printf("Enter any number:");
	scanf("%d",&num);

	for(i=1; i<num; i++)
	{
		
		if(num%i==0)
		{
			printf("%d\n",i);
			sum=sum+i;
			
		}
       
	}

	if(sum==num)
	{
		printf("\n%d is perfect  number ",sum);
	}
	else
	{
		printf("\n%d is non-perfect number",sum);

	}
		return sum;    
}
 
int main()
{
	
	pr();	

}