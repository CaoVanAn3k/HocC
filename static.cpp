#include<iostream>
#include<math.h>
using namespace std;
class math{
    public:
    static int abs(int x){
        return x < 0 ? -x : x;
    }
    static int add(int x,int y){
        return x+y;
    }
    static int subtract (int x,int y){
        return x-y;
    }
    static int min(int x,int y){
        return x < y ? x : y;
    }
    static int max(int x,int y){
        return x > y ? x : y;
    }
    static int pow(int x,int y){
        int a=1;
        for(int i=0;i<y;i++){
            a*=x;
        }
        return a;
    }
};
int main(){
    cout<<math::abs(-2)<<endl;
    cout<<math::add(2,3)<<endl;
    cout<<math::max(6,5)<<endl;
    cout<<math::min(3,4)<<endl;
    cout<<math::pow(2,3)<<endl;
    return 0;
}