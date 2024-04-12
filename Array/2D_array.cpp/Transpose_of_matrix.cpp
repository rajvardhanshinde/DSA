error in code please check once

#include<iostream>
using namespace std;
void transposematrix(int arr[3][3]){
    cout<<"transpose of matrix -"<<endl;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            swap(arr[i][j],arr[j][i]);
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
        
    }
    
}
int main(){
    int arr[3][3];
    cout<<"Enter the value s of matrix :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Matrix is -"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    transposematrix(arr);
    


    return 0;
}

