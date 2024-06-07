#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways= maze(sr,sc+1,er,ec);
    int leftways= maze(sr+1,sc,er,ec);
    int totalways= rightways+leftways;
    return totalways;  
}
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways=maze2(row,col-1);
    int leftways=maze2(row-1,col);
    int totalways= rightways+leftways;
    return totalways;
}
int main(){
    cout<<maze(1,1,3,3)<<endl;
    cout<<maze2(3,3);

    
}