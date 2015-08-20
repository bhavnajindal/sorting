#include<stdio.h>
#include<stdlib.h>
void mergesort(int *,int,int);
void merge(int *,int,int,int);
void main()
{
   // int l;
    int i,a[5]={4,3,5,1,2};
 
//    printf("he");   
    // sscanf(argc[1],"%d",&l);
   // a= (int*)malloc(l*sizeof(int));

  //  printf("hello");
   // for(i = 0; i < 10; i++)
     //   a[i]=rand()%10;

    mergesort(a,0,4);

   for(i=0; i<5; i++)
       printf("%d\n",a[i]);
}

void mergesort(int *a,int beg,int end){
    int mid;
    if(beg<end)
    {
 //       printf("hello");
        mid=beg+(end-beg)/2;
        mergesort(a,beg,mid); 
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}

void merge(int *a, int beg, int mid, int end)
{
     int *left,*right,i,j,k;
     int ll , rl;
   // printf("hello");

     ll= mid-beg+1;
     left  = (int *)malloc(ll * sizeof(int));

     rl = end-mid;
     right = (int*)malloc(rl * sizeof(int));

     for(i = 0; i < ll; i++)
         left[i] = a[beg + i];

     for(j = 0; j < rl; j++)
         right[j] = a[mid + 1+ j];

     i = 0;
     j = 0;
     k = beg;

     while(i < ll && j < rl){
         if(left[i]<right[j]){
              a[k]=left[i];
              i++;
         }

         else if(left[i]>=right[j]){
             a[k]=right[j];
             j++;
         }
         k++;
    }

    while(i<ll){
        a[k]=left[i];
        i++;
        k++;
    }

    while(j<rl){
        a[k]=right[j];
        j++;
        k++;
    }
    
    
   // free(b);
}
