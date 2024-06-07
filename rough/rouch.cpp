#include <bits/stdc++.h>
using namespace std;

int main() {
     int j;
    cin >> j;
    while (j--){
        int n;
        cin>>n;
        int a[n];
        for(int k = 0;k< n; k++) {
            cin >> a[k];}
        if(n==2){
            if(a[0]>a[1]){
                cout<<"no"<<endl;}
            else{
                cout<<"yes"<<endl;}
            continue;}
        if(n==3){
            if(a[1]<min(a[2],a[0]) || a[1]>max(a[2],a[0])){
                cout<<"no"<<endl;}
            else
                cout<<"yes"<<endl;
                continue;}
        cout<<"yes"<<endl;
}
}



#include <bits/stdc++.h>
using namespace std;
  void solve(){
      int n;
      cin>>n;
      cout << (n + 1) / 2 << " " << (n + 2) / 3 << "\n";
  }


int main() {
  int t;
  cin>>t;
  while(t--){
      solve();
  }

}




int solve(char c3, char c4){
    int amn=0;
    while(c3!=c4){
        c3+=3;
        if(c3>90){
            c3=c3-26;
        }
        amn++;
    }
    return amn;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string p,c;
	    cin>>p>>c;
	    vector<int>h(n);
	    for(int k=0;k<p.size();k++){
	        h[k]=solve(p[k],c[k]);
	    }
	    for(auto it:h){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}
	

}