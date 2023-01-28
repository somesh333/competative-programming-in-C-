#include<iostream>
using namespace std;

long long int SquareRoot(int n){
   int s = 0;
   int e = n;
   int mid = s + (e-s)/2;

   long long int ans = -1;

   while(s<= e){
    long long int sqa = mid*mid;

    if(sqa == n)
        return mid;
    
    if(sqa < n){
        ans = mid;
        s = mid + 1;
     } else{
       e= mid -1;
            }

   

    mid = s + (e-s)/2;
   }
   return ans;
}


double decimal(int n, int point,int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i = 0 ; i<point ; i++){

    factor = factor/10;

    for(double j=ans ; j*j<n ; j = j+factor){
        ans = j;
    }

    }

    return ans;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    int tempSol = SquareRoot(n);
    cout<<"Answer is : "<<decimal( n , 3 , tempSol)<<endl;


    return 0;

}