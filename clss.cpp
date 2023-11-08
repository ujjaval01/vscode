#include<iostream>
using namespace std;
class student{
    public:
    int rollNum;
    float marks;
    string name;
};
int main(){
student s1;
s1.name = "Ujvl";
s1.rollNum = 9;
s1.marks = 90;

cout<<s1.name<<endl;
cout<<s1.rollNum<<endl;
cout<<s1.marks;
}