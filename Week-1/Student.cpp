#include<iostream>
using namespace std;

class Student{
    string name;
    int id;
    double cgpa;
public:

    Student(){}
    /*Student(string n, int id, double cgp){
        name = n;
        this->id = id;
        this->cpga = cgp;
    }*/
    Student(string n, int id, double cgp):name(n),id(id),cgpa(cgp){
        cout<<"Student constructor"<<endl;
    }

    void setCgpa(double new_cgpa){
        if(new_cgpa <= 4){
            cgpa = new_cgpa;
        }else{
            cout<<"invalid update"<<endl;
        }
    }

    void display(){
        cout<<"name:"<<name<<" id:"<<id<<" cgpa:"<<cgpa<<endl;
    }
};

int main(){
    Student s1("Mina", 3 , 3.4);
    s1.display();
    s1.setCgpa(4.5);
    s1.display();



    /*int a, b, sum, sub;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    sum = a + b;
    sub = a - b;
    cout<<"sum:"<<sum<<endl;
    cout<<"sub:"<<sub<<endl;*/
}
