#include<iostream>
using namespace std;

int sum(int num){
int sum=0;
for (int i = 2; i <= num; i=i+2)
{
    sum=sum+i;
    
}
return sum;

}

int main(){
int n;
cout<<"enter number: "<<endl;
cin>>n;
cout<<sum(n);
return 0;
}