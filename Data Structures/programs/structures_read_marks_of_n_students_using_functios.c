#include<stdio.h>
#include<stdlib.h>


struct student
{
    char name[100];
    char USN[100];
    int m1,m2,m3;
    float avg;
};


void read(struct student[],int);
void display(struct student[],int);
float avg(int,int,int);



int main()
{
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student s[n];
    read(s,n);
    display(s,n);
    
    
}
void read(struct student s[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the student name and USN and three subject marks: ");
        gets(s[i].name);
        gets(s[i].USN);
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].avg=avg(s[i].m1,s[i].m2,s[i].m3);  
    }
   
    
}

void display(struct student s[],int n)
{
    int i;
    printf(" The student name and USNs are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%s\t",s[i].name);
        printf("%s",s[i].USN);
        printf("marks of sub1=%d, sub2=%d, sub3=%d\n",s[i].m1,s[i].m2,s[i].m3);
        printf("Average= %f",s[i].avg);
        printf("\n");
    }
}

float avg(int x,int y,int z)
{
    int min=x;
    if(y<min)
        min=y;
    else if(z<min)
            min=z;
    return((x+y+z-min)/2);
}