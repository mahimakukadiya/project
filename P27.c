/*You are tasked with creating a system for managing sports teams in
CHARUSAT. Each team consists of a team name, sport type (e.g., basketball,
football), and a coach. Each coach has details such as name, age, and experience.
Your program should:
 Store information about multiple sports teams and their coaches.
 Allow the user to add, search, and display team and coach information.*/
#include<stdio.h>
void Swap_Num( int *,int *);
void main()
{
    double Bank_Balance_1,Bank_Balance_2;
    printf(" Enter Bank Balance 1 : ");
    scanf("%ld",&Bank_Balance_1);
    printf(" Enter Bank Balance 2 : ");
    scanf("%ld",&Bank_Balance_2);
    Swap_Num(&Bank_Balance_1,&Bank_Balance_2);
    printf("%ld %ld",Bank_Balance_1,Bank_Balance_2);
}
void Swap_Num(int *X,int *Y)
{
    int Z;
    Z=*X;
    *X=*Y;
    *Y=Z;
}
