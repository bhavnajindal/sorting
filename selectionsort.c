#include<stdio.h>
#include<stdlib.h>
void sort(int *,int);

void main(int argC, char *argV[] )
{
    //int a[10]={5,7,2,3,4,9,1,34,23,6};
    struct timeval t1,t2;
    long int ti1,ti2; 
    int l,*a;
    int i;

    sscanf(argV[1],"%d",&l);
    a=malloc(l * sizeof(int));

    for(i = 0; i < l; i++){
        a[i]=rand() % l;
    }

    gettimeofday(&t1,NULL);    
    sort(a,l);
    gettimeofday(&t2,NULL);
    
    ti1 = t1.tv_sec * 1000000 + t1.tv_usec;
    ti2 = t2.tv_sec * 1000000 + t2.tv_usec;

    printf("%ld\n",ti2-ti1); 
   
}
void sort(int *a,int l)
{   
    int i,j,temp,min;

     for(i = 0; i < l; i++){
        min=i;
        for(j = i; j < l; j++){
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    } 
  /* for(i = 0; i<l; i++){
       printf("%d\n",a[i]);
   } */
}
