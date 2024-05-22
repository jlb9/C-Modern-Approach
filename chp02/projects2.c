/*/*--------------------------------------------------------------
Projects for Chapter 2 
all in one file 

*/
#include <stdio.h>


/*--------------------------------------------------------------
1, write to display
---------------------------------------------------------------*/

int main() {

    printf("         *\n");
    printf("        *\n");
    printf("       *\n");
    printf(" *    *\n");
    printf("  *  *\n");
    printf("   *\n");


/*--------------------------------------------------------------
2. find volumen of sphere with r =10, v = 4/3 * pi * r^3
---------------------------------------------------------------*/ 
printf("---------------------------------------------------------------\n");
float v;
float coeff = 4.0/3.0;
float pi = 3.14f;
float r;
//float r3 = (r * r * r);

r = 10;
r = (r * r * r);

v = coeff * pi * r;

printf("r ^ 3 = %f\n", r); // (r * r *r));
printf("Volume of sphere with rad = 10 = %f\n", v);

/*--------------------------------------------------------------
3. Modify 2 above for user input 
---------------------------------------------------------------*/
printf("---------------------------------------------------------------\n");

v = 0;  // clears dfrom above
// float coeff = 4.0/3.0;
// float pi = 3.14;
r = 0;  // clears from above
//float r3 = (r * r * r);

printf("Enter the radius of sphere to find volume.\n");
scanf("%f", &r);
r = (r * r * r);

v = coeff * pi * r;

printf("r ^ 3 = %f\n", r); // (r * r *r));
printf("Volume of sphere with rad = 10 = %.3f\n", v);

/*--------------------------------------------------------------
4. enter dollors and cents value and return amoutn with 5% salestax
---------------------------------------------------------------*/
printf("---------------------------------------------------------------\n");


float dollars;
printf("Enter the Price, to find total with 5%% sales tax\n");
scanf("%f", &dollars);

// float total = dollars = (dollars * .05);


printf("Total = %.2f\n", dollars + (dollars * .05));

/*--------------------------------------------------------------
7. Write a program that request a dollar ammoutn and then shows how to 
        Pay using smallest amout of each bill value.
---------------------------------------------------------------*/
printf("---------------------------------------------------------------\n");

int dollar_amount;
int twenties, tens, fives, ones;

printf("Enter a dollar amount.\n");
scanf("%d", &dollar_amount);

twenties = dollar_amount / 20;
dollar_amount = dollar_amount  - (twenties * 20);

tens = dollar_amount / 10;
dollar_amount = dollar_amount  - (tens * 10);

fives = dollar_amount / 5;
dollar_amount = dollar_amount  - (fives * 5);

ones = dollar_amount / 1;
dollar_amount = dollar_amount  - (ones * 1);

printf("$20 bills = %d\n$10 bills = %d\n $5 bills = %d\n $1 bills = %d\n", twenties, tens, fives, ones);

}