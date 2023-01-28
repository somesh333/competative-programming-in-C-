#include<iostream>
using namespace std;

int firstNum(int arr[] , int size, int n ){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int store = -1 ;
     
     while(start<= end){
        if(n == arr[mid]){
           store = mid;
           end = mid - 1;

        }else if(n > arr[mid]){
            start = mid + 1;

        }else if(n < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end-start)/2 ;
     }
return store;

}

int lastNum(int arr[] , int size, int n ){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1 ;
     
     while(start<= end){
        if( arr[mid] == n){
           ans = mid;
           start = mid + 1;

           cout<< ans <<start<<endl;

        }else if(n > arr[mid]){
            start = mid + 1;

        }else{
            end = mid - 1;
        }

        mid = start + (end-start)/2 ;
     }
return ans;

}



int main(){
    int arr[10]  =  {1,2,3,4,4,4,4,4,6,7};
    // int n;

    cout<<" the first index of 4 number is :"<<firstNum(arr , 10 , 4)<<endl;
    cout<<" the last index of 4 number is :"<<lastNum(arr , 10 , 4)<<endl;

    // pair<int ,  int> firstAndLastPosition(int arr , int size , int n){

    //     pair<int , int>p;
    //     p.first = firstNum(arr , n , k);
    //     p.second = lastNum(arr , n , k);

    //     return n
    // } 

    return 0;
}