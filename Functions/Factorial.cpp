#include<iostream>
using namespace std;
int factorial(int num){
int factorial=1;
for (int i = 1; i <=num; ++i)
{
    factorial=factorial*i;
}
return factorial;

}
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<factorial(n);
    return 0;
}