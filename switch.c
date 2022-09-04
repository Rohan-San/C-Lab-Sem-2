#include <stdio.h>

int main(void) {
  int a, b, res;
  char ch=' ';
  printf("enter the operation to carry on \n");
  scanf("%c",&ch);
  printf("Enter the numbers on which operations has to be done \n");
  scanf("%d %d", &a, &b);  
  switch(ch){
    case '+':{
      res=a+b;
      break;
    }
    case '-':{
      res=a-b;
      break;
    }
    case '/':{
      res=a/b;
      break;
    }
    case '%':{
      res=a%b;
      break;
    }
    default:
    printf("enter a valid character\n");
  }
  printf("%d %c %d = %d",a,ch,b,res);
  return 0;
}