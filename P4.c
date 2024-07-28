#include<stdio.h>

int main() {
    float bharat_population=1441981744;
    float Total_literacy_rate=85.95;
    float Women_count=48.4;
    float Total_Women=(bharat_population*Women_count/100);
    float Total_men=(bharat_population-Total_Women);
    float Literacy_men=80.95;
    float Literacy_rate_of_men=((Literacy_men/100)*Total_men);
    float Literacy_women=62.84;
    float Literacy_rate_of_women=((Literacy_women/100)*Total_Women);
    float illiterate_men=(Total_men-Literacy_rate_of_men);
    float illiterate_women=(Total_Women-Literacy_rate_of_women);
          printf("Total illiterate men:%f\n",illiterate_men);
          printf("Total illiterate women:%f\n",illiterate_women);
          printf("\nmahima kukadiya, 24TCES9M");
    return 0; // This line is added to indicate successful execution
}
