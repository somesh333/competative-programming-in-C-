#include<iostream>
using namespace std;

void function(int arr[] , int size ){
    
    for(int i= 0; i<size ; i++){
        cout<< endl <<arr[i] << endl;
    }


    cout<<"everything is fine"<< endl;

    
}



int main(){

    int arr[10] = {2 ,25 ,6 ,4 ,7 ,34,2,45,24,67};

    // int n = 5;
    // for(int i= 0; i<n ; i++){
    //     cout<< endl <<arr[i] << endl;
    // }

function(arr , 5);

    int second[10] = {2 ,25 };
    function(second , 10);


    cout<<"everything is fine"<< endl;

}