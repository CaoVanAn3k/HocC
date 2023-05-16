#include<iostream>
using namespace std;
class circle{
 private:
   double radius; 
 public:
   circle(double radius){
       this->radius = radius;
   }
   double getArea(){
       return radius *radius*3.14;
   }
   double getCircumference(){
       return radius*3.14*2;
   }
};
int main(){
    circle c(7);
    cout<<" "<<c.getArea();
    cout<<"\n "<<c.getCircumference();
}