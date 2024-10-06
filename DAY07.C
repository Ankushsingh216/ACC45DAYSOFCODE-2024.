#include <stdio.h>
int main(){
float area,base,height;
printf("enter the base of the triangle:");
scanf("%f",&base);
printf("enter the height of the triangle:");
scanf("%f",&height);
area = (base * height) / 2;
printf("Area of Triangle is %0.f",area);
return 0;
}
