#include<iostream>
using namespace std;

void count(int n ){
    for(int i= 0; i<=n ; i++){
        cout << i << endl;

    }
}

int main(){
int n ,m ,x ;
cout<<"enter the number";
cin>>n;

cout<<"enter the number";
cin>>m;

cout<<"enter the number";
cin>>x;
count(n);
count(m);
count(x);

return 0;

}