#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,33,109,54,6,43,90,100};
    int size=10;
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
           max=arr[i];
        }
        
    }
    cout<<max;
    return 0;
    
}