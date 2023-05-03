#include<stdio.h>
main()
{
	int i,n1,n2,k,a[100],b[100],mrg[100];
	printf("Entr first array size=");
	scanf("%d",&n1);
	 
	for(i=0;i<n1;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		mrg[i]=a[i];
	}
	k=i;
	printf("Enter second array size=");
	scanf("%d",&n2);
	
	for(i=0;i<n2;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
		mrg[k]=b[i];
		k++;
	}
	
	printf("mearge of array value=\n");
	for(i=0;mrg[i]!='\0';i++)
	{
		printf("meg[%d]=%d\n",i,mrg[i]);
	}
		
}	
