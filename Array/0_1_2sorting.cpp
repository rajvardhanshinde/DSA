#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,2,1,0,0,2};
    int sizea=8;
    int count0=0;
    int count1=0;
    int count2=0;
    for (int i = 0; i < sizea; i++)
    {
        if (arr[i]==0)
        {
            count0++;   
        }
        else if(arr[i]==1)
        {
            count1++;
        }
        else 
        {
            count2++;
        }
        nk
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i]=0;
    }
    for (int i= 0; i < count1; i++)
    {
        arr[i]=1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[i]=2;
    }
    
    for (int i = 0; i < sizea; i++)
    {
        cout<<" "<<arr[i];
    }
    
    return 0;
    
}
