#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 0)
        return 1;

    int smallNumber = factorial(n-1);
    int biggerNumber =  n * smallNumber;



    return biggerNumber;


}

int main(){
    
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int ans = factorial(n);

    cout << ans <<endl;


    return 0;
}