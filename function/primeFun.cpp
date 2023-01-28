#include<iostream>
using namespace std;

bool primenum(int n ){
    for(int i =2; i<n; i++ ){
       if(n % i == 0){
        return 1;
       }
    }
    return 0;
}

int main(){

    int n;

    cout<<"enter the number : ";
    cin>>n;

     if(primenum(n)){
        cout<<"is not a prime number";
     }else{
        cout<<"is a prime number";
     }

    return 0;
}