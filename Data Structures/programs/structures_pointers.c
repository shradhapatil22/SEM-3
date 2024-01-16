/*#include<stdio.h>>
#include<stdlib.h>
struct student
{
    char name[100];
    char USN[100];
};
int main()
{
    int i;
    struct student s[5];
    printf("Enter the student name and USN: ");
    for ( i = 0; i < 5; i++)
    {
        gets(s[i].name);
        gets(s[i].USN);
    }
    printf(" The student name and USNs are: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%s\t",s[i].name);
        printf("%s",s[i].USN);
        printf("\n");
    }
}
*/

#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[100];
    char USN[100];
};

int main()
{
    int i;
    struct student s[5],*ptr;
    ptr=s;
    printf("Enter the student name and USN: ");
    for ( i = 0; i < 2; i++)
    {
        scanf("%s",ptr->name);
        scanf("%s",ptr->USN);
        ptr++;
    }
    printf(" The student name and USNs are: ");
    ptr=s;
    for ( i = 0; i < 2; i++)
    {
        printf("%s",ptr->USN);
        printf("%s\t",ptr->name);
        printf("\n");
        ptr++;
    }
}
