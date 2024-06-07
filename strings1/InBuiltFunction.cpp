#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //  string str="raghav garg is at pw";
    //  cout<<str.size();// 0 to str.length()-1
    // int len = str.length();

    // string str ="acbd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string s="raghav";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;

    // string s="abc";
    // cout<<s<<endl;
    // // string t="def";
    // // s= s + t;
    // // cout<<s<<endl;
    // s= s+ "xyz";
    //  cout<<s<<endl;

          // REVERSE
    string s="abcdef"; // 0 1 2 3 4 5
    cout<<s<<endl;
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
}