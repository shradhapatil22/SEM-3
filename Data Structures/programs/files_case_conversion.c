#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
main()
{
    FILE *f1,*f2;
    char ch,ch1,str[100];
    int i=0;
    printf("Enter the text\t");
    f1=fopen("G:\\college\\SEM 3\\Data Structures\\programs\\input.txt","w");
    do
    {
        ch=getchar();
        fputc(ch,f1);
    }while (ch!='\0');
    fclose(f1);
    f1=fopen("G:\\college\\SEM 3\\Data Structures\\programs\\input.txt","r");
    f2=fopen("G:\\college\\SEM 3\\Data Structures\\programs\\output.txt","w");
    while ((ch=fgetc(f1))!=EOF)
    {
        if(ch==' '&&ch==ch1)
        {
             continue;
        }
        if(isupper(ch))
        {
            fputc(tolower(ch),f2);
        }
        if(islower(ch))
        {
            fputc(toupper(ch),f2);
        }
        ch1=ch;
        
    }
    fclose(f1);
    fclose(f2);
    printf("Your text has been edited");
    
}