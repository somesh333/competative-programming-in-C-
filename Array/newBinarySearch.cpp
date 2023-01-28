#include<iostream>
using namespace std;
int binary(int arr[]  , int size, int n){
   int  start = 0 ;
   int  end = n-1;
   int mid =(start + end) /2;

   while(start <= end){
   
    if( n == arr[mid]){
        return mid;
    }
      
    if( n > mid){
        start = mid + 1;
    }else{
        end = mid - 1;
    }

    mid =(start + end )/2;
   }
   return -1;
}


int main(){

    int arr[5] = {3,5,6,7,8};

   int  evenNum = binary(arr , 5 ,5);

   cout<<"index of number is : "<< evenNum<<endl;
}