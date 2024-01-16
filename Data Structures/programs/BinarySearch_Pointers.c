#include<stdio.h>
int read(int *, int );


void main()
{   
    int n,i, a[100],*p, *high, *low,*mid, key;
    printf("Enter th size\t");
    scanf("%d",&n);
    printf("enter the array elements\t");
    read(a,n);
    high=a+(n-1);
    low=a;
    printf("Enter the key element: ");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=low+((high-low)/2);
        if(key>*mid)
        {
            low=mid+1;
        }
        else
            if(key<*mid)
            {
                high=mid-1;
            }
        else
        {
            printf("Key element found\n");




            
        }
    }
}

int read(int *a, int n)
{
    int i;
    int *p;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    } 
}