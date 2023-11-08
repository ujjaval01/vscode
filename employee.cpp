#include <iostream>  
using namespace std;  
// class Employee {  
//    public:  
//        int id;   
//        string name;  
//        float salary;  
//        void insert(int i, string n, float s)    
//         {    
//             id = i;    
//             name = n;    
//             salary = s;  
//         }    
//        void display()    
//         {    
//             cout<<id<<"  "<<name<<"  "<<salary<<endl;    
//         }    
// };  
// int main(void) {  
//     Employee e1;    
//     Employee e2; 
//     e1.insert(201, "Sonoo",990000);    
//     e2.insert(202, "Nakul", 29000);    
//     e1.display();    
//     return 0;
// }





































class employee{
    public:
    int salary;
    int id;
    string name;

void insert(int s, int i, string n){
    id =i;
    salary = s;
    name = n;

}
void display(){
    cout<<"Name: "<<name<<" "<<"Id: "<<id<<" "<< "Salary: "<<salary<<endl;
}
};
int main(void){
    employee e1;
    employee e2;
    e1.insert(25000, 9, "ujvl");
    e2.insert(24000, 29, "aashish");
    e2.display();
    e1.display();
    return 0;
}
