#include<stdio.h>
void main()
{
    int Marks[10];
    int i;
    int Distinction=0,First_Class=0,Pass=0,Fail=0;
    int *CP;
    CP=&Marks[0];
    for(i=0;i<5;i++,CP++)
    {
        printf("Enter the marks of student %d :",i+1);
        scanf("%d",CP);
    }
    CP=&Marks[0];
    for(i=0;i<5;i++,CP++)
    {
        if(*CP>=70)
        {
            Distinction++;
        }
        else if(*CP<70 && *CP>=60)
        {
            First_Class++;
        }
        else if(*CP<60 && *CP>=40)
        {
            Pass++;
        }
        else
        {
            Fail++;
        }
    }
    printf("Distinction :%d\n",Distinction);
    printf("First Class :%d\n",First_Class);
    printf("Pass :%d\n",Pass);
    printf("Fail :%d\n",Fail);
}
