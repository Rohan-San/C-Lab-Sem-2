#include <stdio.h>
#include<math.h>
int main(void) {
  printf("Enter the co-efficients a,b&c of the quadratic equations \n");
  float a,b,c,d;
  float r1,r2;
  scanf("%f %f %f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d==0){
    r1=-b/2*a;
    printf("roots are real and equal \n");
    printf("root = %.2f",r1);
  }else if(d>0){
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    printf("roots are real and unequal \n");
    printf("root 1= %.2f root2= %.2f\n",r1,r2);
  }else if(d<0){
    r1=-b/2*a;
    r2=sqrt(-1*d)/2*a;
    printf("roots are imaginary and unequal \n");
    printf("root 1= %.2f +i%.2f  root2= %.2f -i%.2f\n",r1,r2,r1,r2);
  }
  return 0;
}