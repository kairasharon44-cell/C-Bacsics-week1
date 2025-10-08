#include <stdio.h>
int main() {
int num1, num2, sum, difference, product;
float quotient;
       printf("enter first number:");
       scanf("%d", &num1);
       
       printf("enter second number:");
       scanf("%d", &num2);

       sum = num1 + num2;
       printf("sum = %d", sum); 

       difference =num1 - num2;
       printf("difference = %d\n", difference);

       product = num1 * num2;
       printf("product = %d\n", product);

       quotient = (float)num1 /num2;
       printf("quotient = %.f", quotient);
       if(num2 == 0){
       printf("error: division by 0 is not allowed");}
return 0;
}
