#include<iostream>
using namespace std;

 int peakIndexInMountainArray(int arr[] , int size ) {
      int  s = 0;
      int   e = size -1;
      int   mid = s + (e - s)/2;

        while(s < e){
          if(arr[mid] < arr[mid + 1] ){
               s = mid + 1;
          }else{
              e = mid;
          }
          mid = s + (e - s)/2;
        }
        return s;
    }

int main(){

int arr[3] = {0,1,0};

int  mountain = peakIndexInMountainArray(arr , 3 ) ;

cout<<"the mid value is : " << mountain << endl;
}

// find out index value of the mountain peak;