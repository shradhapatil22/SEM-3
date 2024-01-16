// to check the addresses of the pointers
#include<stdio.h>
main()
{
    int x=10;
    int *p1,**p2,***p3;
    p1=&x;
    p2=&p1;
    p3=&p2;
    printf("p1= %p  p2= %p  p3= %p\n",p1,p2,p3);
    printf("p1= %d  p2= %p  p3= %p\n",*p1,**p2,***p3);
}