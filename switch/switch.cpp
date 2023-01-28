#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number ";
    cin>>num;

    switch(num){
        case 1: cout<<"hello thsi is a case 1";
                break;

        case 2: cout<<"hello this is a case 2";
                break;

                default :
                cout<< "try anything else";

    }
}