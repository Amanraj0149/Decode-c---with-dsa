#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number :";
    cin>>n;
 int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
        else
        sum-=i;
    }
    cout<<sum;
}