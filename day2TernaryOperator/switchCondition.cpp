#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no of daYs :";
    cin>>x;
    // 1 3 5 7 8 10 12 -> 31 DAYS
    //4 6 9 11 -> 30 DAYS
    //2 ->28 DAYS
    switch ((x<=7 && x%2!=0) || (x>=8 && x%2==0))
    {
     case 1:
     cout<<"31";
       break;
    }
    
     switch (x%4==0 || x%6==0 || x%9==0 || x%11)
    {
     case 1:
     cout<<"30";
       break;
    }
    
    switch(x){
        case 2 :
        cout<<"28";
          break;
    }
}