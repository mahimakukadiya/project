#include <stdio.h>

int main() {
    int itemNumber;
    int totalCost = 0;

    printf("Welcome to Foodies Restaurant!\n");
    printf("Here is our menu:\n");
    printf("1. Burger - ₹150\n");
    printf("2. Pizza - ₹200\n");
    printf("3. Pasta - ₹120\n");
    printf("4. Sandwich - ₹100\n");
    printf("5. French Fries - ₹80\n");
    printf("Enter the number of the item you wish to order (Enter '0' to finish):\n");

    while (1) {
        scanf("%d", &itemNumber);

        switch (itemNumber) {
            case 1:
                totalCost += 150;
                printf("Added Burger - ₹150\n");
                break;
            case 2:
                totalCost += 200;
                printf("Added Pizza - ₹200\n");
                break;
            case 3:
                totalCost += 120;
                printf("Added Pasta - ₹120\n");
                break;
            case 4:
                totalCost += 100;
                printf("Added Sandwich - ₹100\n");
                break;
            case 5:
                totalCost += 80;
                printf("Added French Fries - ₹80\n");
                break;
            case 0:
                printf("Order complete.\n");
                printf("Total cost: ₹%d\n", totalCost);
                return 0;
            default:
                printf("Invalid item number. Please select a valid item number or enter '0' to finish.\n");
                break;

        }
    }

    return 0;
}

