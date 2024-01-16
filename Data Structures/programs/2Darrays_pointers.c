#include<stdio.h>
main()
{
    int m,n,a[10][10],i,j,sum,*p=a;
    p=&a[0][0];
    printf("enter the order of the matrix ");
    scanf("%d%d",&m,&n);
    printf("enter the array elements ");
    for(i=0;i<m;i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    for(i=0;i<m;i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf(" %d\n",*(*(a+i)+j));
        }
    }
    
    printf("\n %d",*a);
    printf("\n %d",*p);
    printf("\n %p",a);
    printf("\n %p",p);
    printf("\n %p",a+1);
    printf("\n %d",*a[1]);
}
