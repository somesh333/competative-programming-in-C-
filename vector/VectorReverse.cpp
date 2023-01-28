#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v , int n ) {
    int s = 0 ;
    int e = v.size() - 1;

    for(int i = 0 ; i <= n ; i++){
        s = n+1;
    

    while(s<=e){
        swap(v[s] , v[e]);
        s++;
        e--;

    } 
    }
    return v;

}

void print(vector<int> v){
    for(int i = 0 ; i< v.size() ; i++){
        cout<<v[i] <<endl;

    }
}

int main(){
    int n;
    vector<int> v ;
     
     cout<<"enter the number : "<<endl;
     cin>>n;

    v.push_back(11);
    v.push_back(17);
    v.push_back(18);
    v.push_back(19);
    v.push_back(15);

   vector<int> ans = reverse(v , n );

   print(ans);
}