#include<iostream>
using namespace std;
int minnum(int arr[3][3]){
    int min=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]<min)
            {
                min=arr[i][j];
            }
            
        }
        
    }
    cout<<"Maximun number is:" <<min;
    
}
int main(){
    int arr[3][3];
    
    cout<<"enter the matrix elements:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<" YOUR MATRIX-"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"  ";
            
        }
        cout<<endl;
    }
    minnum(arr);
}