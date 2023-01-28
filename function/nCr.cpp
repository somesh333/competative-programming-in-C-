#include<iostream>
using namespace std;

int facto(int n){
    int fact = 1;

    for (int i = 1; i<=n ; i++){
        fact = fact * i;

    }
    return fact;
}

int nCr(int n , int r){
    int num = facto(n);

    int deno = facto(r) * facto(n - r);

    return num / deno ;
}

int main(){
    int n , r;
    cout<<"Enter the number";
    cin>> n >> r;
    cout<<"Answer is : "<< nCr(n , r) <<endl;

    return 0;
}