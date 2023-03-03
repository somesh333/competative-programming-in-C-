#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[] , int size){

    int start = 0;
    int end = (size-1);
    int mid =  (start + end)/2 ;

  while(start < end){
    if( arr[mid] < arr[mid + 1] ){
       start = mid +1;
    }else{
          end = mid ; 
    }
         mid =  (start + end)/2 ;
  }
         return start;
};


int main(){

int arr[8] = {0,1,2,3,4,25,12,0} ;

int  mountain = peakIndexInMountainArray(arr , 8 ) ;

cout<<mountain << endl;
// cout<<peakIndexInMountainArray <<endl ;


    // return 0;
}