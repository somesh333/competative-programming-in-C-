#include<stdio.h>
#include<stdbool.h>

int main(){
    int num;
    int m = 0;
    bool isPrime = true;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num == 1){
        printf("Number is prime");
    }
    else if(num > 1){
        m = num/2;
        for(int i = 2; i < num; i++){
            if(num % i == 0){   
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            printf("Number  is prime");
        }
        else{
            printf("Number is not prime");
        }
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}