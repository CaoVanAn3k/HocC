#include<iostream>
using namespace std;
class math{
   public:
   static int max(int a,int b){
       return a>b?a:b;
   }
   static int max(int a,int b,int c){//nạp chồng toán tử
       return max(max(a,b),c);  
   }
};
int main()
{
    cout<<math::max(2,3)<<endl;
    cout<<math::max(2,3,4);
    return 0;
}