#include<stdio.h>

int main(){
    int a,b,c;
    int total;
    printf("Enter the 3 angles of trangle : ");
    scanf("%d%d%d",&a,&b,&c);
    total = a + b + c;

    if(total == 180){
        printf("Your triangle an is %d degree, And it is valid trangle",total);
    }
    else{
        printf("It is not valid triangle");
    }
    return 0;
}