#include<stdio.h>
main()
{
	int i,n;
	int a[100];
	int b[100];
	int sum[100];
	printf("Enter value of n=");
	scanf("%d",&n);
	printf("Enter value of A array.\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter value of B array.\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	
	printf("Addition of arrays=\n");
	for(i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
		printf("sum[%d]=%d\n",i,sum[i]);
	}
	
}
