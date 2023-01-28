#include<stdio.h>

int main(){
    int r,x,y;
    printf("Enter the radius : ");
    scanf("%d",&r);

    printf("Enter the x and y : ");
    scanf("%d%d",&x,&y);

    if((x<0) &&(y<0)){
        x = x - x - x;
        // printf("%d",x);
        if(r<x){
        printf("Out of the circle");
        }
        else if(r == x){
        printf("On the circle");
        }
        else if(r > x){
        printf("In the circle");
        }
    }
}