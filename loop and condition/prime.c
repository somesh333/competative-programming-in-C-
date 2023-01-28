#include<stdio.h>
#include <stdbool.h>

int main(){
    int num , m =0;
    bool isprime = true;

    printf("Enter the number : ");
    scanf("%d", &num);

    if(num == 1){
    printf("It is prime number");
    }
    m = num/2;
     if(num > 1){
        for(int i = 2; i > num; i++){
            if(num % 2 == 0)
            isprime = false;
        // printf("It is a not prime number" );
        
        // }
       
    
    if(isprime){
        printf("It is prime number");
    }
    else{
        printf("It is not prime number");
    }
    }
    else{
        printf("It is a not prime number" );
        }
    return 0;
}