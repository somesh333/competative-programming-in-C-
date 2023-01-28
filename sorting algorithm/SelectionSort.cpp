#include<iostream>
using namespace std;

int selection(int arr[]  , int n){
    
    int  minIndex ;  
    for(int i = 0; i<n-1 ; i++){
    minIndex = i;

    for(int j = i+1 ; j<n ; j++){
        if(arr[j] < arr[minIndex])
        minIndex = j;
        
    }
    swap(arr[minIndex] , arr[i]);

    }
    return minIndex;
}


int main(){
   int arr[5] = {1,2,3,4,5};
  

   selection(arr  , 5);
   
   cout<<"the sorted is : "<<selection(arr  , 5)<<endl;

    return 0;

}


// for(int i= 0 ; i<n-1 ; i++){
//     minIndex = i

// for(int j= j+1 ; j<n ; j++){

//     if(arr[j] < arr[minindex]){
//         minIndex = j
//     }
//     swap(arr[minIndex] < arr[i])

// }