
#include <stdio.h>

int main() {

  /*--------------------------------------------------------------
  1. Write a program that caclculates how many digits a number has.
  ---------------------------------------------------------------*/
    int number;

    printf("Enter a number with 4 digits or less: ");
    scanf("%d", &number);

    if (number > -1 && number < 10) {
        printf("The number %d has 1 digit\n", number);
    }

    else if (number > 9 && number < 100) {
        printf("The number %d has 2 digits\n", number);
    }
    else if (number > 99 && number < 1000) {
        printf("The number %d has 3 digits\n", number);
    }
    else if (number > 999 && number < 10000) {
        printf("The number %d has 4 digits\n", number);
    }
    else { 
        printf("The number %d has more many digits\n", number);
    }
    

  /*--------------------------------------------------------------
  2. Write a program that asks for Army time and display it in 12-hr.
  ---------------------------------------------------------------*/

    int hour, min;

    printf("Enter a time in 24 hour format: ");
    
    
    scanf("%d:%d", &hour, &min);
    
    printf("Equivalent 12 hour time is: ");
    if (hour == 0 || hour == 24) {
        printf("12 %2.2d AM\n", min);
    }
    else if (hour < 12) {
        printf(" %d:%2.2d AM\n", hour, min);
    }
    else if (hour == 12) {
        printf("Eqivalent 12 hour time is: %d:%2.2d  PM\n", hour, min);
    }
    else {
        printf("%d:%2.2d PM\n", hour-12, min);
    }
    //return 0;


  /*--------------------------------------------------------------
  3. Ask for  speed(knots) and output the mode.
  ---------------------------------------------------------------*/

    int wind_speed;

    printf("Enter the wind speed in knots: ");
    scanf("%d", &wind_speed);
    
    printf("Wind Status = ");
    if (wind_speed <= 1) {
        printf("Calm");
    }
    else if (wind_speed <= 3) {
        printf("Light air\n");
    }
    else if (wind_speed <= 27) {
        printf("Breeze\n");
    }
    else if (wind_speed <= 47) {
        printf("Gale\n");
    }
    else if (wind_speed <= 63) {
        printf("Storm\n");
    }
    else  {
        printf("Hurricane !!\n");
    }
}
