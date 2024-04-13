
error
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{2,3,-12,76,-23,-21,1,-90};
    int start=0;
    int i=0;
    int end=arr.size()-1;

    for (int i = 0; i <= arr.size(); i++)
    {
        if (arr[i]<0)
        {
            swap(arr[i],start);
            i++;
            start++;
        }
        if (arr[i]>0)
        {
            swap(arr[i],end);
        
            start--;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
         cout<<arr[i];
    }
    
   
    return 0;
    
}