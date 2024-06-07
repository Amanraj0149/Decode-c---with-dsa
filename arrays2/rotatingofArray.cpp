#include<iostream>
#include<vector>
using namespace std;
    void display(vector<int>& v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;    
    }
    void reversepart(int i , int j, vector<int> &v){
        while (i<=j)
        {
            int temp =v[i];
            v[i] =v[j];
            v[j] =temp;
            i++;
            j--;
        }
        
    }
int main(){
    vector<int> v;
    v.push_back(1);
     v.push_back(6);
      v.push_back(2);
       v.push_back(3);
        v.push_back(7);
         v.push_back(4);
         display(v);
         int k;
         cout<<"enter the value of k:";
         cin>>k;
         reversepart(0,v.size()-k-1,v);
         reversepart(v.size()-k,v.size()-1,v);
         reversepart(0,v.size()-1,v);
         display (v);
}