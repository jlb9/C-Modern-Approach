
#include <stdio.h>

int main() {

  /*--------------------------------------------------------------
  1. ENter a 2-digit number and print it with digits reversed.
  ---------------------------------------------------------------*/

  int num, tens, hundredths;

  printf("Ender a two-digit nubmer: ");
  scanf("%d", &num);

  printf("10's digit is Modulus 10 = %d\n", num % 10);
  printf("100's digit is number dived by 10 = %d\n", num / 10);
  
  tens = num % 10;
  hundredths = num / 10;

  printf("The number entered reversed is : %d%d\n", tens, hundredths);

    
  /*--------------------------------------------------------------
  2. Extend the above to 3-digit nunmber 
  ---------------------------------------------------------------*/
    
  int thousandths, two_digit;

  printf("Enter a 3-digit number: ");
  scanf("%d", &num);
  
  // printf("The 1000's digit is Modulus 100 = %d\n", num%100);
  
  thousandths = num /100;
  two_digit = num %100;
  hundredths= two_digit / 10;
  tens = two_digit % 10;
  printf("Tens = %d\n", tens);
  
  printf("3 Digit reversed = %d%d%d\n", tens, hundredths, thousandths);

}
