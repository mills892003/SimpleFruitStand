//  Music Store Receipt
//
//  Created by Milan Patel
//  Copyright © 2018 Milan Patel. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define Sales_Tax 0.05
#define Teach_Discount 0.12

float storeTeach(float purchase, float teacher);
float storeCiv(float purchase, float teacher);
int main(void)
{
    /*  define variables  */
    float purchaseTotal, teacherDeclare;
    
    /* gather data from users  */
    
    printf("Enter purchase total: $");
    scanf("%f", &purchaseTotal);
    printf("Enter '1' if you're a teacher, '2' if other: ");
    scanf("%f", &teacherDeclare);
 
    /* calculate and display receipt */
    
    if(teacherDeclare == 1)
            {
            storeTeach(purchaseTotal, teacherDeclare);
            }
    else
            {
            storeCiv(purchaseTotal, teacherDeclare);
            }
    
   
    
    /* getch(0); */
    return(0);
}


/* Nested processing and display functions */

float storeTeach(float purchase, float teach2)
{
    float teach1, tax1, bigTotal, total;
   
    teach1 = purchase * Teach_Discount ;
    total = (purchase - teach1) ;
    tax1 = total * Sales_Tax ;
    bigTotal = tax1 + total ;
    
    printf("\nTotal Purchases                 $%.2f", purchase);
    printf("\nTeacher's discount (12%%)        $%.2f", teach1);
    printf("\nDiscounted total                $%.2f", total);
    printf("\nSales Tax (5%%)                  $%.2f", tax1);
    printf("\nTotal                           $%.2f", bigTotal);
    return (0);
}


float storeCiv(float purchase, float teach2)
{
    float tax1, bigTotal ;
    
    tax1 = purchase * Sales_Tax ;
    bigTotal = tax1 + purchase ;
    
    printf("\nTotal Purchases                 $%.2f", purchase);
    printf("\nSales Tax (5%%)                  $%.2f", tax1);
    printf("\nTotal                           $%.2f", bigTotal);
    return (0);
}
