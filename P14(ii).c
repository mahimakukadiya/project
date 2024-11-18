#include <stdio.h>
int main()
{
    int rows;
    printf("enter size of table:");
    scanf("%d",&rows);
    for(int i=0; i<=rows; i++)
    {
        for(int j=0; j<=2*(rows-i)-1; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
    printf("24CE058");
}
