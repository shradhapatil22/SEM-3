#include <stdio.h>

void fun(int a)
{
	printf("Value of a is %d\n", a);
}

void add(int a, int b)
{
    printf("Sum= %d",(a+b));
}

void subtract(int a, int b)
{
    printf("difference= %d",(a-b));
}

void multiply(int a, int b)
{
    printf("Product= %d",(a*b));
}

int main()
{
	int ch,a,b;
    void (*func_ptr[])(int,int)={add,subtract,multiply};
	void (*fun_ptr)(int) = &fun;
	(*fun_ptr)(10);
    printf(" Enter 0:addition 1:subtract 2:multiply : ");
    scanf("%d",&ch);
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 0:func_ptr[0](a,b);
                break;
        case 1:func_ptr[1](a,b);
                break;
        case 2:func_ptr[2](a,b);
                break;
        default: printf("Invalid choice");
    }

    return 0;
}


