#include<iostream>
using namespace std;

int getMax(int arr[] , int n){
 int maxi = INT_MIN;
    
    for(int i = 0 ; i<=n ; i++){

    maxi = max(maxi , arr[i]);
        // if(arr[i] > max){
        //   max = arr[i];  
        // }
    }
   
return maxi;
}

int getMin(int arr[] , int n){
    int mini = INT_MAX;

    for(int i = 0 ; i<=n ; i++){

         mini = max(mini , arr[i]);

        // if(arr[i]< min ){
        //     min = arr[i];
        // }
    }

    return mini;
}


int main(){

    int arr[100] ;
    int  size;

    cout<<"enter the number";
    cin>>size;

    for(int i = 0 ; i<= size ; i++){
        cin>>arr[i];
    }

    cout<< "max_array :"<< getMax(arr , size ) <<endl ;
    cout<< "min_array :"<< getMin(arr , size) <<endl ;
    
}