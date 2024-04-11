#include<iostream>
using namespace std;
int printcolcount(int arr[3][3]){
    
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<" "<<endl;
        
    }
    

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
    cout<<"COUNT OF ROWS : "<<endl;
    printcolcount(arr);
    return 0;
}