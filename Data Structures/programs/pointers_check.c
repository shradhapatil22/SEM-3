// #include<stdio.h>
// void main()
// {
//     int x,y;
//     int *ptr;
//     x=10;
//     ptr=&x;
//     y=*ptr;
//     printf("%d is stored at %p\n",x,&x);
//     printf("%d is stored at %p\n",*&x,&x);
//     printf("%d is stored at %p\n",*ptr,ptr);
//     printf("%d is stored at %p\n",y,&*ptr);
//     printf("%d is stored at %p\n",ptr,&ptr);
//     printf("%d is stored at %p\n",y,&y);
// }

/*#include <stdio.h>
const int x=10;

int main()
{
    int *p;
    p=&x;
    printf("Value of x before= %d",x);
    *p=20;
    printf("\nValue of x After= %d",x);

    return 0;
}*/

#include<stdio.h>
main()
{
    int x[]={10,20,30}, *p=x;
    printf("p=%p\n",p);
    printf("(*p)+1=%d\t p=%p\n",(*p)+1,p);
    printf("*p++=%d\t p=%p\n",*p++,p);
    printf("*(p+1)=%d\t p=%p\n",*(p+1),p);
    printf("*(p)++=%d\t p=%p\n",*(p)++,p);
}