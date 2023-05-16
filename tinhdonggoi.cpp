#include<iostream>
using namespace std;
class person{
    private:
    int id;
    string name;
    int age;
    string address;
    public:
    int getid(){
        return id;
    }
    void setid(int id){
        this->id=id;
    }
    string getname(){
        return name;
    }
    void setname(string name){
        this->name=name;
    }
    int getage(){
        return age;
    }
    void setage(int age){
        this->age=age;
    }
    string getaddress(){
        return address;
    }
    void setaddress(string address){
        this->address=address;
    }
};
int main()
{
 person p;
	p.setid(1001);
	p.setname("Quynh");
	p.setage(24);
	p.setaddress("Ha Noi");
	cout << "Id: " << p.getid() << endl;
	cout << "Name: " << p.getname() << endl;
	cout << "Age: " << p.getage() << endl;
	cout << "Address: " << p.getaddress() << endl;   
return 0;
}