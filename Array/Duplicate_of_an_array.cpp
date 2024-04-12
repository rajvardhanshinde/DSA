#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5,6,7,3};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i]==arr[j])
            {
                cout<<arr[i];
            }
            
        }
        
    }
    
    return 0;
}
