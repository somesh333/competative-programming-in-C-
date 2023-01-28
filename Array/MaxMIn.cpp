#include<iostream>
using namespace std;

int getMin (int num[] , int n ){
    int mini = INT_MAX;
    for(int i = 0; i<n ; i++){
       
    //    mini = min(mini , num[i]);

        if(num[i] < mini){
            mini = num[i];
        }
    }
return mini;
}

int getMax (int num[] , int n ){
    int maxi = INT_MIN;
    for(int i = 0; i<n ; i++){
       
    //    maxi = max(maxi , num[i]);
       
        if(num[i] > maxi){
            maxi = num[i];
        }
    }
return maxi;
}

int main(){

    int num[100];
    int size;

    cout<<"enter the value";
    cin>>size;

    for(int i = 0; i<size ; i++){
        cin >> num[i];

    }

    cout <<"The max is :" <<getMax(num , size)<<endl;
    cout <<"The min is :" <<getMin(num , size)<<endl;
}