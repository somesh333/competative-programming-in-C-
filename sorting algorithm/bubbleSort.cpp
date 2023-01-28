#include<iostream>
using namespace std;

int bubble(int arr[], int n){

    for(int i = 1 ; i < n; i++){

        for(int j = 0; j < n-i ; j++ ){

            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    return -1;
}

int main(){

    int arr[5] = {5,8,9,3,6};

    // bubble()

    cout<<"the sorted array is : "<<bubble(arr,5)<<endl;
}