#include<iostream>
using namespace std;

int binary(int arr[], int size , int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end + start)/2;

    while(start <= end){
      
      if(n == arr[mid]){
        return mid;

      }

      if(n > mid){
        start = mid +1;

      }else{
        end = mid - 1;

      }
     
       mid =start + (end + start)/2;

    }

    return -1;
}

int main(){

    int arr[7] = {2,5,6,7,8,9,12};
    // int arr[6] = {2,5,6,8,9,12};


    int evenNumber = binary(arr , 7 , 6);

    cout<<"Index of element :"<<evenNumber <<endl;


}


