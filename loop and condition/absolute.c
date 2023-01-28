#include<stdio.h>

int main(){
    int n, num;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n<0){
        num = n - n - n;
        printf("value is %d",num);
    }
    else{
        printf("value is %d",n);
    }
    return 0;
}