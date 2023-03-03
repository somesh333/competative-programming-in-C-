#include<iostream>
using namespace std;

int newPivortss(int arr[] , int size){

        int start = 0;
        int end = (size - 1);
        int mid = start + (end - start) /2;

        while(start < end ){
            if(arr[mid] >= arr[0] ){

                start = mid + 1;
            
            }
            else{

                end = mid ;
            }
            mid = start + (end - start) /2;
        }
        return  start;
    

}

int main(){

    int arr[5] = {8,10,17,1,3};

    int pivort = newPivortss(arr , 5);
    
    cout << newPivortss(arr , 6) << endl;

}