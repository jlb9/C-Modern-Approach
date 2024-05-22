#include <stdio.h>

int main() {


    // /*--------------------------------------------------------------
    // 1, ask user for date in form mm/dd/yyyy and then display in yyyymmdd.
    // ---------------------------------------------------------------*/
    // int month, day, year;

    // printf("enter the date in form dd/mm/yyyy\n");
    // scanf("%d/%d/%d", &month, &day, &year);
    // printf("Date is %d%2.2d%2.2d\n", year, month, day);


    // /*--------------------------------------------------------------
    // 2, formmats product information entered by user.
    // ---------------------------------------------------------------*/

    // int item_number, montha, daya, yeara;
    // float price;

    // printf("Enter the item number.\n");
    // scanf("%d", &item_number);

    // printf("Enter the unit price.\n");
    // scanf("%f", &price);

    // printf("Enter the date of purchase.form dd/mm/yyyy\n");
    // scanf("%d/%d/%d", &montha, &daya, &yeara);

    // printf("-----------------------------------------");
    // printf("\nItem\t Unit \t\t Purchase\n\t Price\t\t Date\n%-3d\t $ %.2f\t %d/%d/%d\n", item_number, price, montha, daya, yeara);

    // /*--------------------------------------------------------------
    // 3, Write a program that breask sown ISBN entered by user 
    // -------------------------------------------------------------*/
    
    // int ibsn, gs1, group, publisher, item, check;

    // printf("Enter the ISBN number: ");
    // scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);
    
    // printf("GS1 prefix: %d\n", gs1);
    // printf("Group Identifier: %d\n", group);
    // printf("Publisher: %d\n", publisher);
    // printf("Item Number: %d\n", item);
    // printf("Check digit: %d\n", check);
    

    /*--------------------------------------------------------------
    4. recive number in form [(xxx) xxx-xxxx] and output in xxx.xxx.xxxx
    ------------------------------------------------------------*/

    int area, first, second;

    printf("Enter a phone number in the form [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &first, &second);

    printf("You Entered: %d.%d.%d\n", area, first, second);

}
