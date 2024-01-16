#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
main()
{
    int a[100],*p=a,i,*mid,*high,*low,*key,n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter  elements in the array: ");
    for(p=a;p<a+n;p++)
    {
        scanf("%d",a);
    }
    printf("Enter the key element: ");
    scanf("%d",key);
   *low=0, *high=n-1;
    while(*low<=*high)
    {
        *mid=*(low+(high-low))/2;
        if(*key==*(a+*mid))
        {
            printf("Key element found at %d",*mid);
            exit(0);
        }
        else
            if (*key<*(a+mid))
            {
                *high=*mid-1;
            }
        else
            if(*key>*(a+mid))
            {
                *low=*mid+1;
            }
    }
}

