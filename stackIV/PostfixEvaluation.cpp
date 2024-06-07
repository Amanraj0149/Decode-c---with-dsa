#include<iostream>
#include<stack>
using namespace std;

int solve(int val1, int val2, char ch){
    switch(ch){
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': return (val2 != 0) ? (val1 / val2) : 0;
        default: return 0;
    }
}


int main(){
    string s = "79+4*8/3-"; //post fix
    stack<int> val;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            val.push(s[i]-'0');
        }
        else { //s[i] it is -> *,/,+,-
        // kaam
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,s[i]);
         val.push(ans);
        }
    }
   
    cout << "Result: " << val.top() << endl;
    return 0;
}
