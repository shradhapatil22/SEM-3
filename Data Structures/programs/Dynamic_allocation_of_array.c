#include<stdio.h>
#include<stdlib.h>
int read(int*,int n);
int display(int*,int n);
int sum(int*,int n);

int main()
{
    int n;
    int *p;
    printf("Enter the number of elements");
    scanf("%d",&n);
    //p=(int *) calloc(n,sizeof(int));
    p=(int *) malloc(n*sizeof(int));
    printf("Enter the array elements");
    read(p,n);
    printf("The array elements are: ");
    display(p,n);
    printf("The sum  of the array elements is : %d ",sum(p,n));
}

int read(int* p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}

int display(int* p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}

int sum(int* p,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s+=*(p+i);
    }
    return s;
}
