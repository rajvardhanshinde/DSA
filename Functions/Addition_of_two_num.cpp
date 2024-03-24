// Addition of two numbers
#include<iostream>
using namespace std;

int sum(int x,int y){     /* function declaration*/
       return x+y;
}

int main(){
  int a;
  cout<<"Enter num one: "<<endl;
  cin>>a;
  int b;
  cout<<"Enter num two: "<<endl;
  cin>>b;
  cout<<sum(a,b)<<endl;              /* function call*/ 
  return 0;
}


// NOTE- Declaration of the function should always above the function call