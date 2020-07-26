//Name:Md.Saidul islam tanveer
//Id:1611556043

#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main(){

int radius;float circle;float perimeter;
printf("enter the radius\n:");
scanf("%d",&radius);
circle = PI*radius*radius;
printf("circle= %.1f\n",circle);
perimeter= (2*PI*radius);
printf("perimeter =%.1f\n",perimeter);
return 0;
}
