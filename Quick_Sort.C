#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int t;
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start<end)
    {
          while(a[start]<=pivot)
          {
              start++;
          }
          while(a[end]>pivot)
          {
              end--;
          }
          if(start<end)
          {
               t = a[end];
               a[end] = a[start];
               a[start] = t;
          }
    }
          t = a[lb];
          a[lb] = a[end];
          a[end] = t;
          return end;
}

void Quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
    loc = partition(a,lb,ub);
    Quicksort(a,lb,loc-1);
    Quicksort(a,loc+1,ub);
    }
}

int main()
{
    int a[] = {15,3,34,90,100,78,234,89,65,78,45};
    int m = sizeof(a)/sizeof(int);
    printf("\n %d",m);
    Quicksort(a,0,10);
    for(int i=0;i<=10;i++)
    {
        printf("\n %d",a[i]);
    }
}