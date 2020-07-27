//Md.Saidul Islam Tanveer
//Id:1611556043
// Write a C code that takes a number as input from user and determines whether it's a Positive Real/Negative Real/ Natural/Rational/Irrational Number and gives the feedback to use.
#include<stdio.h>
int main(){

 float n;
 printf("the number :");
 scanf("%f",&n);
 if(n>0&& n-(int)n==0){
 printf("the number is positive nautral number");

 }
 else{
 printf("the number is not natural");

 }
  return 0;




}
