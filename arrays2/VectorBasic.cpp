 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int> v;// u need not mention size
    //inserting /input do not use[]
    v.push_back(6);
    cout<<v.size()<<endl;
     v.push_back(1);
        cout<<v.size()<<endl;
      v.push_back(9);
         cout<<v.size()<<endl;
       v.push_back(0);
          cout<<v.size()<<endl;
    ;
// if u want to update /acess;
 v[0]=88;
       cout<<v[0]<<" ";
        cout<<v[1]<<" ";
         cout<<v[2]<<" ";
          cout<<v[3]<<" ";
 }