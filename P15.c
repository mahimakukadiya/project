/*Consider a situation where a user needs to analyze a set of numbers they input into
a system. Imagine a data entry operator who inputs 25 different numbers via the
keyboard. The goal is to develop a C program that processes these numbers to
determine specific characteristics: how many of the numbers are positive, how
many are negative, how many are even, and how many are odd.*/
#include<stdio.h>
int main()
{
    int n=0,p=0,e=0,o=0,b;
    int a[25],i;
   printf("Enter of the value:");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
    if(a[i]%2==0)
    {
            e++;
    }
    else if(a[i]%2!=0)
    {
        o++;
    }
     if(a[i]>0)
    {
        p++;
    }
     else if(a[i]<0)
    {
        n++;
    }
    }
    printf("positive number=%d\n",p);
    printf("negetive number=%d\n",n);
    printf("odd number=%d\n",o);
    printf("even number=%d\n",e);
    return 0;
}
