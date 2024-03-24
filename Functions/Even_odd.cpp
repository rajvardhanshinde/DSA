#include<iostream>
using namespace std;
int Evenodd(int num){
    if (num%2==0)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    } 
}
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    Evenodd(n);
    return 0;
}