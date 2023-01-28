#include<stdio.h>

int main(){
int a,b,d,f,h,total;
    printf("Enter the number:");
    scanf("%d", &a);

    b = a / 100;
    a = a % 100;

    d = a / 50;
    a = a % 50;

    f = a / 10;
    a = a % 10;

    h = a / 5;
    a = a % 5;

   total = b + d + f + h;
   printf(" the total number of note is : %d", total);
    return 0;
}