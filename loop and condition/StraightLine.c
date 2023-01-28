#include<stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the First co-ordinate (x1): ");
    scanf("%d",&x1);

    printf("Enter the Second co-ordinate (x2): ");
    scanf("%d",&x2);

    printf("Enter the Third co-ordinate (x3): ");
    scanf("%d",&x3);

    printf("Enter the First co-ordinate (y1): ");
    scanf("%d",&y1);

    printf("Enter the First co-ordinate (y2): ");
    scanf("%d",&y2);

    printf("Enter the First co-ordinate (y3): ");
    scanf("%d",&y3);

    if((x1==x2)&&(x1==x3)){
        printf("Line  is  straight\n");
    }
    else{
        printf("Line is not straight\n");
    }
    if((y1==y2)&&(y1==y3)){
        printf("Line is straight\n");
    }
    else{
        printf("Line is  not  straight\n");
    }
    return 0;
}