#include<iostream>
using namespace std;
class student{
    public:
     string name;
     int age;
     student(){
         name=this->name;
         age=this->age;
     }
     void input(){
         cin>>name;
         cin>>age;
     }
     void output(){
         cout<<"name:"<<this->name<<"age:"<<this->age<<endl;
     }
};
int main(){
    student st;
    st.input();
    st.output();
    return 0;
}