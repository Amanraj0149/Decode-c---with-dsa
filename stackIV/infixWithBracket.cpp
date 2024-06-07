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
        case '/': return (val2 != 0) ? (val1 / val2) : 0; // Handle division by zero
        default: return 0;
    }
}

int main(){
    string s = "(7+9)*4/8-3";
    stack<int> val;
    stack<char> op;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            val.push(s[i]-'0');
        }
        else if(s[i] == '(' || op.empty() || op.top() == '('){
            op.push(s[i]);
        }
        else if(s[i] == ')'){
            while(op.top() != '('){
                char ch = op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.pop(); // Discard '('
        }
        else if(prio(s[i]) > prio(op.top())){
            op.push(s[i]);
        }
        else{ // Handle operators with lower or equal precedence
            while(!op.empty() && prio(s[i]) <= prio(op.top())){
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
    // Handle remaining operators
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
    cout << "Result: " << val.top() << endl;
    return 0;
}


