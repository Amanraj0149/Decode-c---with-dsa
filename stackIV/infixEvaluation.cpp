#include<iostream>
#include<stack>
using namespace std;

int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else return 0;
}

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
    string s = "7+9*4/8-3";
    stack<int> val;
    stack<char> op;
    for(int i = 0; i < s.length(); i++){
         //check if s[i] is a digit (0-9)
        // int ascii =(int)(s[i]);
        if(s[i] >=  '0' && s[i] <= '9'){
            val.push(s[i]-'0');
        }
        else{
              //s[i] it is ->,*,/,+,-
            if(op.empty() || prio(s[i]) > prio(op.top()))
                op.push(s[i]);
            else{ // work ,priority(s[i])<=priority(op.top())
                while(!op.empty() && prio(s[i]) <= prio(op.top())){ // Corrected comparison
                  //i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
     // opertaor stack can have value
    //to make it empty
    while(!op.empty()){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top();
    return 0;
}

