#include<iostream>
using namespace std;
bool prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
        
    }
    return true;
    
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
   bool isprime=prime(n);
   if(isprime){
    cout<<"prime";
   }
   else{
    cout<<"not prime";
   }

}