/*Write a C program using a character string in a block of memory space created by
calloc () and then modify the same to store a larger string using realloc () function.
(Dynamic Array).*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *str=NULL;
    str=(char *)calloc(sizeof(char),10);
    if(str==NULL)
    {
        printf("Memory allocation failed \n");
    }
    printf("Enter a string(<10 chars) : \n");
    gets(str);
    printf("Enter a largest string(<15 chars) : \n");
    str=(char *)realloc(str,15);
    gets(str);
    printf("New string : %s \n",str);
    printf("24CE058");

}
