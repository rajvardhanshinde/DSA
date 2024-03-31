#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;
    int start=0;
    int end=size-1;
    for (int i = 0; i<size ; i++)
    {
        while (start<end)
        {
            swap(arr[start],arr[end]);
        start++;
        end--;
        
        }
        cout<<arr[i]<<" ";
        
    }
   
    
    return 0;
    
}
