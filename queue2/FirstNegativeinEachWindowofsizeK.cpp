#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={3,-4,-7,30,7,-9,2,1,6,-1};
    int k=3;
    // -4,-4,-7,-9,-9,-9,0,-1 answer ayega
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    queue<int>q;
    //pure array mai traverse karo , q mai negative element ke index push karo
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    //pre array mai traverse karo , like sliding window 
    int i=0;
    while(i+k<=n){  // i<=n-k bhi chalega
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0) ans.push_back(0);
        if(q.front()>=i+k) ans.push_back(0); // window mai lie nhi kar paye , means no negative element is present
        else{
            ans.push_back(arr[q.front()]);
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}