#include<iostream>
using namespace std;

int insertion(int arr[] , int n){
    for(int i= 0 ; i<n; i++){
       int temp = arr[i]
        int j = i-1;
        for(; j>= 0 ; j--){

            if(temp  < arr[j+1] ){
                arr[j+1] = arr[j]; 
            }else{
                   break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){

    int arr[5] = {3,5,67,8,9};

    cout<<"sorting array is: "<<insertion(arr , 5)<<endl;
}