#include<stdio.h>
#include<stdlib.h>
void sort(int [],int);
void main(int argV, char *argC[] )
{
     int l, *a;
     int i;   
     struct timeval t1,t2;
     long int v1,v2;

     sscanf(argC[1],"%d",&l);
     a = (int *)malloc(l * sizeof(int));
    
     for(i = 0; i < l; i++){
         a[i]=rand()%l; // a[i]=i;
     }
    
     gettimeofday(&t1,NULL);
     sort(a,l);
     gettimeofday(&t2,NULL);

     v1 = t1.tv_sec * 1000000 + t1.tv_usec;
     v2 = t2.tv_sec * 1000000 + t2.tv_usec;

     printf("\n%ld\n",v2-v1); 
  /*
     for(i=0; i<2; i++){
         printf("%d",a[i]);
     }*/
}

void sort(int a[],int n)
{
    int i,j,temp;
    
    for(i=1; i<n; i++){
        temp=a[i];
        for(j=i-1;a[j]>temp; j--)
        {
            if(j<0)
            {
               break;
            }
               a[j+1]=a[j];
            
        }
        a[++j]=temp;
    }
//   for(i=0;i<n;i++)
  //      printf("%d ",a[i]);
}
