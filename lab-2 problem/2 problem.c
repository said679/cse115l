//Name:Md.Saidul islam tanveer
//Id:1611556043

#include<stdio.h>
#include<math.h>
int main(){
int base,hypotanous; int value =2;
float result1,result2,result;
float height,area;
printf("enter base\n:");
scanf("%d",&base);
printf("enter hypotanous\n:");
scanf("%d",&hypotanous);
printf("%d\n",value);
result1 =  pow(base,value);
printf("%d %d %.2f\n",base,value,result1);
result2 =  pow(hypotanous,value);
printf("%d %d %.2f\n",hypotanous,value,result2);
result = result2-result1;
printf("%f\n",result);
height=sqrt(result);
printf("%f\n",height);
area= (0.5*height*base);
printf("%f\n",area);
//printf("%d",height);
//area= (0.5*base*height);
return 0;
}

