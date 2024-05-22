#include <stdio.h>

int main() {

  /*--------------------------------------------------------------
  1, predict the output
  ---------------------------------------------------------------*/

    printf("%6d %4d\n", 86, 1024);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);

  /*--------------------------------------------------------------
  2, Write calls of printf thats display a float varible x in the following formats
  ---------------------------------------------------------------*/
    
    // a. exponetial notation. left-justified in a field of size 8, one digit after the decimal point/
    // b. Exponetial notration. right-justified
    // c  fixed decimal notration ; left justified in a field of size 8 three digits after the decimal point.
    // d. fice decimal notration; rigt-justified in a field of size 6; no digits after the decimal point. 
    
    //hrintf("a %d
    int i,j ;
    float x ;
        
    printf("Enter a int, float, int\n");
    scanf("%d%f%d", &i, &x, &j);

    printf("%d %f %d\n", i, x, j);
    // printf("\a");
    // printf("\a");
    // printf("\a");
    // printf("\a");
    // printf("\a");

}
