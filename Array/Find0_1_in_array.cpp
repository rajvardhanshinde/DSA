#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,1,1,0,0,1,0,1,0,1,1,1};
    int size=13;
    int numzero=0;
    int numone=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
           numzero=numzero+1;                     /*numzero=numzero+1*/  
        }
        if (arr[i]==1)
        {
            numone=numone+1;
        }
        
        
    }
    cout<<"Number of zeros: "<<numzero<<endl;
    cout<<"Number of ones: "<<numone<<endl;

    return 0;
}