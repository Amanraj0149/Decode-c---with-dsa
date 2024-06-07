#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i , int j, vector<long long> &arr){
        while (i<=j)
        {
            int temp =arr[i];
            arr[i] =arr[j];
            arr[j] =temp;
            i++;
            j--;
        }
    }
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // int d=k%n;
        if(n<=k){
             reversepart(0 ,n-1,arr);
        }
        else{
            int i=0;
            while(n/k){
            reversepart(i ,i+k-1,arr);
            i+=k;
            }
           i+=k;
            reversepart(i ,n-1,arr);
        }
    }

int main(){
    vector<long long> arr;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    reverseInGroups(arr,n,k);
    // return arr;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}