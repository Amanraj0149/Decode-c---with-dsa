bool is possible(vector<int> arr, int n, int m, int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<= mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
    
            pagesum+=arr[i];
        }
    }
    return true;
}




int main(){
int s=0;
in sum=0;
for(int i=0;i<;i++){
    sum+=arr[i];
}
int e=sum;
int mid=s+(e-s)/2;
while(s<=e){
    if(is possible (arr,n,m,mid)){
        ans=mid;
        e=mid-1;// ans to mil gaya ab usse chota mai dudhenge

    }
    else{
        s=mid+1;
    }
mid=s+(e-s)/2;
}
return ans;
}