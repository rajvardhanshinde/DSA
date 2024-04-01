#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter size of vector :"<<endl;
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter elements of vector :"<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
