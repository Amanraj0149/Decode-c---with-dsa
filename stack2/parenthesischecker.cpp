//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
     stack<char> st;
        for(char ch : x){
            if(ch == '('  || ch== '{' || ch== '['){
                st.push(ch);
            }
            else{
                // Check if the stack is empty before attempting to pop.
                if(st.empty()) return false;
                
                if((ch==')' && st.top()!='(') || (ch=='}' && st.top()!='{') || (ch==']' && st.top()!='['))
                    return false;
                st.pop();
            }
        }
      
        // Check if the stack is empty after processing all characters.
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
// } Driver Code Ends