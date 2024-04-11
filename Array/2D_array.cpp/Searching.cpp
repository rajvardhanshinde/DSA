#include<iostream>
using namespace std;
int search(int arr[3][3],int num){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==num)
            {
                cout<<"Found ";
            }
            
            
        }
        
    }
    
}
int main(){
    int num=6;
    int arr[3][3];
    cout<<"enter num in matrix"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    search(arr,num);
    
    
    
    
    
}