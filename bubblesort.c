#include<stdio.h>
void main()
{
	int a[50];
	int n,k,i,j,temp,count=0,pass,ex;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the pass and exchange value");
	scanf("%d%d",&pass,&ex);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			    temp=a[j];
			    a[j]=a[j+1];
			    a[j+1]=temp;
			    count++;
			}
		if(count==ex)
		{
			printf("\nafter 10th pass");
			for(k=0;k<n;k++)
			   printf("%d ",a[k]);
			count++;
		}
		}
	        if(i==pass)
		{
		   printf("after 5th pass");
		   for(k=0;k<n;k++)
			printf("%d ",a[k]);
		}
	}
} 
