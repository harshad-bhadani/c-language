#include<stdio.h>

int main()

{
	int p[5],c[5],m[5],total,per;


for(int i=0; i<5; i++)

{

	printf("Enter the marks:");
	scanf("%d",&p[i]);
	scanf("%d",&c[i]);
	scanf("%d",&m[i]);

	total=p[i]+c[i]+m[i];
	printf("total marks:%d\n",total);

	per=(total*100)/300;
	printf("percentage:%d\n",per);

	if(per>=90)
	{

	printf("A grade\n");
	}
	else
	if(per<90 && per>=80)
	{

	printf("B grade\n");
	}
	else
	if(per<80 && per>=70)
	{

	printf("C grade\n");
	}
	else
	{

	printf("D grade");
	}

}

	return 0;

}