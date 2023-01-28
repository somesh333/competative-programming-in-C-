#include<iostream>
using namespace std;

void counting(int src , int desc ){
         
         if(src == desc){
            return ;
         }

         cout<<"start" <<src << "desc" << desc <<endl;

        //  src++;

         counting(src+1 , desc);

        //  return ans;

}

int main(){

    int src = 1;
    int desc = 10;

    counting(src, desc);

    return 0;

}