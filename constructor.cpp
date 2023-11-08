#include<iostream>
using namespace std;
class aashish{
    public:
    string name;
    int id;
    int marks;
aashish(string n, int i, int m){
    name  = n;
    id = i;
    marks = m;
}
void display(){
    cout<<name<<" "<<id<<" "<<marks<<endl;
}
};
int main(void){
    aashish as1("ujvl",9, 755);
    as1.display();
    return 0;

}