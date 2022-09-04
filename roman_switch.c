#include <stdio.h>

int main(void) {
  printf("enter the number to get its roman equivalent \n");
  int i;
  scanf("%d",&i);
  switch(i){
    case 1:
      printf("I");
      break;
    case 2:
      printf("II");
      break;
    case 3:
      printf("III");
      break;
    case 4:
      printf("IV");
      break;
    case 5:
      printf("V");
      break;
    default:
      printf("enter a valid number \n");
  }
  return 0;
}