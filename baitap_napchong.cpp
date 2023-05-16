#include<iostream>
using namespace std;
class arraycalculator{
   public:
   static int sumofarray(int arr[],int n){
       int tong=0;
       for(int i=0;i<n;i++){
           tong+=arr[i];
       }
       return tong;
   }
   static double sumofarray(double brr[],int n){
       double tong=0;
       for(int i=0;i<n;i++){
           tong+=brr[i];
       }
       return tong;
   }
};
int main(){
    int n,m;
    int arr[100];
    double brr[100];

    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nhap "<< i+1<<":"<<endl;
        cin>>arr[i];
    }
    cin>>m;
     for(int i=0;i<m;i++){
        cout<<"nhap "<< i+1<<":"<<endl;
        cin>>brr[i];
    }
    cout<<arraycalculator::sumofarray(arr,n)<<endl;
    cout<<arraycalculator::sumofarray(brr,n);
}