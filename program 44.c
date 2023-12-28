#include<stdio.h>
void main()
{
	int a[10],*p,max=3768,i;
	printf("enter 10 elements");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	p=a;
	for(i=0;i<10;i++)
	{
		if(*p>max)
		max = *p;
		p++;
	}
	printf("maximum=%d",max);
}
