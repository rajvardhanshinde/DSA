#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,33,109,54,6,43,90,100};
    int size=10;
    int min=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];
        }
        
    }
    cout<<min;
    return 0;
    
}