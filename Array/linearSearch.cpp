#include<iostream>
using namespace std;

bool linear(int arr[] , int size ,int n){

    for(int i = 0 ; i<size ; i++){
        if(arr[i] == n ){
            return 1;
        }
    }
    return 0 ;
}

int main(){
    int arr[10] = {2,3, 45, 56, -6 ,3 ,9, -3 , 4,5};
    int n;

    cout<<"enter the search number";
    cin>>n;
   
  bool  found =  linear(arr , 10 , n);

    if(found){
        cout<<" Yes it is present";

    }else{
        cout<<"sorry it is not present";
    }

}

