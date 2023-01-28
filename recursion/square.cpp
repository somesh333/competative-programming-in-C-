#include<iostream>
using namespace std;

int square(int n ){

    if(n == 0)
    return 1;

    int smaller = square(n-1);
    int bigger = 2 * smaller;

    return bigger;=
}

int main(){

    int n ; 
    cout<<"Enter the number : ";
    cin>> n ;

   int ans = square(n);

    cout<< ans << endl;

    return 0;


}