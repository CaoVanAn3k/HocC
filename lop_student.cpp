#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    string gender;
    double gpa;
    public:
    student(){
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->gpa=gpa;
    }
    void input(){
        cin>>name;
        cin>>age;
        cin>>gender;
        cin>>gpa;   
    }
    void display(){
        cout<<"name:"<<this->name<<"\nage:"<<this->age<<"\ngender:"<<this->gender<<"\ngpa:"<<this->gpa<<endl;
    }
};
int main()
{
   student s1;
   s1.input();
   s1.display();
}