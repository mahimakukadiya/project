#include<stdio.h>
void main()
{
    int Raman_wealth;
    int A_bungalow_valued=12000000,A_plot_valued=8000000,A_car_valued=3000000;
    int Raman_total_wealth=( A_bungalow_valued+A_plot_valued+A_car_valued);
    printf("Enter the Raman total wealth %d\n",Raman_total_wealth);
    int Suman_wealth;
    int A_apartment_valued=11000000,A_hotel_valued=8000000,Car_valued=8000000;
    int Suman_total_wealth=(A_apartment_valued+A_hotel_valued+Car_valued);
    printf("enter the suman total wealth %d\n",Suman_total_wealth);
    if(Raman_total_wealth>Suman_total_wealth)
    {
        printf("raman possesses the greater total wealth\n");
    }
    else if(Raman_total_wealth<Suman_total_wealth){
        printf("suman possesses the greater total wealth\n");
    }
    else {
        printf("both have equal wealth");
    }
     printf("mahima kukadiya, 24TCES9M");
}
