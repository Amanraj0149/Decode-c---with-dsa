#include<iostream>
using namespace std;
 
int main(){
    int arr[]={1,4,2,7,4};
    int* ptr= arr;//givinf address
    //cout<<ptr<<endl;
//     for(int i=0;i<=4;i++){
//         cout<<ptr[i]<<" ";
//     }
//     cout<<endl;
//    *ptr=8; //ptr[0]=8;
//    ptr++;
//    *ptr=9;
//    ptr--;
    for(int i=0;i<=4;i++){
    cout<<ptr[i]<<" ";
    ptr++;
    }
   

}