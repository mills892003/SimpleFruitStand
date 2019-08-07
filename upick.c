//  Created by Milan Patel on 1/27/19.
//  Copyright © 2019 Milan Patel. All rights reserved.

//  This is a program that calculates your total of fruit bought and then asks for money and gives you back change

#include <stdio.h>
#include <math.h>

//setting prices per lb
#define SugarbellsPrice 1.99
#define HoneybellsPrice 2.39
#define RedGrapefruitPrice 1.69
#define NavelOrangesPrice 1.49
#define PomeloPrice 1.89

// main function
int main()
{
    int itemnumber = 9;
    float total = 0.00;
    float fruitlbs;
    float cashamount;
    
    // loop for entering fruit
    int i=10;
    for(i = 10; i!= 0; )
    {
        printf("\n\nPlease select from the following menu: 1. Sugarbells - $1.99/lb, 2. Honeybells - $2.39/lb, 3. Red Grapefruit $1.69/lb, 4. Navel Oranges - $1.49/lb, 5. Pomelo - $1.89/lb. Enter 0 to stop selection.\n\n\n");
        
        printf("Enter item number or 0 to exit: ");
        scanf("%d" , &itemnumber);
        
        
    switch(itemnumber){
        case 1: printf("\nEnter amount of weight in lbs: ");
            scanf("%f" , &fruitlbs);
            total = total + fruitlbs*SugarbellsPrice;
            break;
        case 2: printf("\nEnter amount of weight in lbs: ");
            scanf("%f" , &fruitlbs);
            total = total + fruitlbs*HoneybellsPrice;
            break;
        case 3: printf("\nEnter amount of weight in lbs: ");
            scanf("%f" , &fruitlbs);
            total = total + fruitlbs*RedGrapefruitPrice;
            break;
        case 4: printf("\nEnter amount of weight in lbs: ");
            scanf("%f" , &fruitlbs);
            total = total + fruitlbs*NavelOrangesPrice;
            break;
        case 5: printf("\nEnter amount of weight in lbs: ");
            scanf("%f" , &fruitlbs);
            total = total + fruitlbs*PomeloPrice;
            break;
        case 0: printf("\n\nThank You.");
            i= 0;
            break;
        default :
            printf("\nInvalid fruit number");
            break;
    }
    }
    
    printf("\n\nAmount Due: $%.2f" , total);
    printf("\nEnter Cash Received: $");
    scanf("%f" , &cashamount);
    printf("Your change is $%.2f", cashamount-total);
    
    return 0;
}
