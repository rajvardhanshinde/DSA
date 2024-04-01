#include<iostream>
#include<vector>

using namespace std;
int main(){
    
    int n;
    
    vector<int> arr;
    // insert 
    arr.push_back(7);
    arr.push_back(27);
    arr.push_back(23);
    arr.push_back(10);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    

    // delete
    arr.pop_back();

     // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" "<<endl;
    }  

    // dynamic array
    cout<<"enter array size: "<<endl;
    cin>>n;
    vector<int>brr(n,-90);
    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" "<<endl;
    }
    

    
    

    return 0;
}