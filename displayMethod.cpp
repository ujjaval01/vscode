


//glatOutputDeRhaHai


#include<iostream>
using namespace std;
class stu{
    public:
int id;
int marks;
string name;

void insert(int i,int m, string n)
{
    i = id;
    n = "nm";
    m = marks;
}
void display(){

    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"marks: "<<marks<<endl;
}

};

int main(){
    stu s1;
    stu s2;
    stu s3;
    s1.insert(9,55,"ujjaval");
    s2.insert(10,40,"saini");
    s3.insert(11,35,"rathore");
    s1.display();
    s2.display();
    s3.display();

    return 0;



}
