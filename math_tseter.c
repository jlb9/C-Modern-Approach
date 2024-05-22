#include <stdio.h>

int main() {
  
  int height, width, length, volume, weight;

  printf("Enter Height --> hint 8 :>\n");
  scanf("%d", &height);

  length = 10;
  width = 12;
  volume = height * length * width;
  weight = volume / 166;
  
  printf("Volume = %d\n", volume);
  printf("Weight = %d\n", weight);

  weight = (volume + 165) / 166;
  printf("Weight = %d\n", weight);
}
