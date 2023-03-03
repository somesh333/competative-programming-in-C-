#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
     //creation

    unordered_map<string , int> m;
    
    //insertion

    //1
    pair<string , int> p = make_pair ("babbar" , 3);
    m.insert(p);
    
    //2
    pair<string , int > pair2("somesh" , 2);
    m.insert( pair2);

    // new_value
    m["tushar"] = 1;

    //update
    m["tushar"] = 2;

    //Search
    cout<<m["tushar"] <<endl;
    cout<<m.at("babbar") <<endl;

    // cout<<m.at(" unknown ") <<endl;
    cout<<m["unknown"] <<endl;

 return 0;
}