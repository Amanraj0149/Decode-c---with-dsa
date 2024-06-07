#include<iostream>
using namespace std;
class Student{ // user define data type
 public:
 string name;
 int roll;
 float marks;
//  Student(string n, int r,float m)
 Student(string name, int roll,float marks){
    this->name=name;
   this-> roll =roll;
   this-> marks=marks; }};

void change(Student *s){
    s->name="Harsh";}

int main(){
   Student s("raghav",76,92.6);  // constructor 
/* s.name="Raghav garg";
    s.roll=76;
   s.marks=92.6 */
   cout<<s.name<<endl;
   change(&s);
   cout<<s.name; 
}