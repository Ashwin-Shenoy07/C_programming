#include<stdio.h>
#include<stdlib.h>

void main()
{
    int choice;
    printf("\n Welcome to our hotel");
    printf("\n Confused what to eat!!!!\n Enter any number of your choice between 1 to 5:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\n Item Code: 1 \t Item Name: Chicken Biryani. \n---------------------- \n Cost: 150rs ");
                break;
        case 2: printf("\n Item Code: 2 \t Item Name: Chicken Tikka. \n---------------------- \n Cost: 180rs ");
                break;
        case 3: printf("\n Item Code: 3 \t Item Name: Paneer Sandwich. \n---------------------- \n Cost: 70rs ");
                break;
        case 4: printf("\n Item Code: 4 \t Item Name: Mushroom Chilly. \n---------------------- \n Cost: 190rs ");
                break;
        case 5: printf("\n Item Code: 5 \t Item Name: Veg Cutlet[2 piece]. \n ---------------------- \nCost: 30rs ");
                break;
        default: printf("\n Item Code: 00 \t Item Name: not existing.");
                break;
    }
    printf("\n\n\n Visit again!!! Thank You");

}
