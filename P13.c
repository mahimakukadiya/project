#include<stdio.h>
int main()
{
    int j,i,a,b;
    printf("size of table vertically:");
    scanf("%d",&a);
    printf("size of table horizontal:");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
    for(j=1;j<=b;j++){
    printf("%5d",i*j);}
    printf("\n");}
    printf("24CE058");

}
