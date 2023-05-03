#include<stdio.h>
main()
{
	int n,a[100],i;
	printf("Enter size of array=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    printf("a[%d]=",i);
		scanf("%d",&a[i]);	
	}
	
	printf("---------------\n");
	
	for(i=0;i<n;i++)
	{
	   printf("%d\n",a[i]);	
	   
	}

}
