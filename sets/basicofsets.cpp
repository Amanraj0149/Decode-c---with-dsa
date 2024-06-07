#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.erase(2);
    // element check kana hai exist kar rha hai?
    int target = 4;
    // s.find()->it searches in the set & if
    // its is not found then it returns the last element
    if (s.find(target) != s.end())
    { // target exists
        cout << "exist" << endl;
    }
    else
        cout << "dosen't exist" << endl;
    cout << s.size() << endl;
    for (int ele : s)
    {
        cout << ele << " ";
    }
}
