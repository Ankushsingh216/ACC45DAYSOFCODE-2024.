#include <stdio.h>
  int main(){
  float num1,num2,sum,diff,mul,div;
  printf("enter first number:");
  scanf("%f",&num1);
  printf("enter second number:");
  scanf("%f",&num2);
  sum = num1 + num2;
  diff = num1 + num2;
  mul = num1 * num2;
  div = num1 / num2;
  printf("the result of sum is:%f\n",sum);
  printf("the result of diff is:%f\n",diff); 
  printf("the result of mul is:%f\n",mul);
  printf("the result of div is:%f\n",div);
  return 0;
  }