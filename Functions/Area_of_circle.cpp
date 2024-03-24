#include<iostream>
using namespace std;
int AOC(int radii){
    float pi=3.14;
    float area=pi*radii*radii;
    return area;
}
int main(){

int r;
cout<<"Enter the radius:" <<endl;
cin>>r;
cout<<AOC(r);
return 0;
}