#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    char oper;

    cout<<"enter the first number";
    cin>>num1;

    cout<<"enter the second number ";
    cin>>num2;
    
    cout<<"enter the operation";
    cin>>oper;

    switch(oper){
        case '+' : cout<< (num1+num2) << endl;
                   break;

        case '-' : cout<< (num1-num2) << endl;
                   break;

        case '*' : cout<< (num1*num2) << endl ;
                   break;

        case '/' : cout<< (num1/num2) << endl ;
                   break;
     
     default: cout<<"try anything else";
    }
    }