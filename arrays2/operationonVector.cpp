 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int> v;// u need not mention size
    
    v.push_back(6);
   
     v.push_back(1);
   
      v.push_back(9);
     
       v.push_back(10);
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
     cout<<endl;
    v.pop_back();
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
 }