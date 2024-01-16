// without funtions
/*#include<stdio.h>
main()
{
    int n,i,j, a[100];
    int *p;
    printf("Enter th size\t");
    scanf("%d",&n);
     p=&a[0];
    printf("enter the array elements\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=&a[0];
    for(i=0;i<n;i++)
    {
        printf("%d \t",*p);
        p++;
    }
}*/

#include<stdio.h>
int read(int *, int );
int display(int *, int);

void main()
{   
    int n,i, a[100],*p;
    printf("Enter th size\t");
    scanf("%d",&n);
    printf("enter the array elements\t");
    read(a,n);
    printf(" the array elements are: \t");
    display(a,n);
}

int read(int *a, int n)
{
    int i;
    int *p;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        //a++;
    } 
    // for(p=a;p<(a+n);p++)
    // {
    //     scanf("%d",a);
        
    // } 

}

int display(int *a,int n)
{
    int i;
    int *p;
    
    for(i=0;i<n;i++)
    {
        printf("%d \t",*(a+i));
        
    }
//    for(p=a;p<&a[n];p++)
//     {
//         printf("%d \t",*p);
//     }
}

