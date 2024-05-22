/*
 *  THis is Chapter 5 exercises
 *
 *
 *
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
// (a)

    int i = 2;
    int j = 3;
    int k;

k = i * j == 6;

    printf("(a) k = %d \n", k);

// (b)
    i = 5; j = 10; k=1;
    printf("(b) %d\n", k > i < j);
// (c)
    i =3; j =2; k=1;
    printf("(c) %d\n", i < j == j < k);
}
