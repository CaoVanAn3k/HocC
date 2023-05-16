#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    student(string name,int age){
        this->name=name;
        this->age=age;
    }
    void ouptut(){
        cout<<"student:"<<name<<"\nsage:"<<age<<endl;
    }
};
int main(){
    student s1("an",14);
    s1.ouptut();
}