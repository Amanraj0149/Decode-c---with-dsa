#include<iostream>
using namespace std;
int main(){
    char ch;
cout<<"enter the character :";
cin>>ch;
int ascii =(int)ch;
// if(ascii>=97 && ascii<=122){
//     cout<<"the character is lower case alphabet";
// }
// if(ascii>=65 && ascii<=90){
//     cout<<"the character is upper case alphabet";
// }
if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
    cout<<"the character is alphabet";
}
}

    
 
