#include<stdio.h>
int main ()
{
    FILE*ptr;
    char data[200];
    ptr=fopen("demo.txr","r");
    if (ptr==NULL)
    {
        printf("file doesn'r exists\n");
    }
    else 
    {
        fgets(data,200,ptr);
        printf("data indide Demo.txr file is :%s\n",data);   
    }
    fclose(ptr);
}