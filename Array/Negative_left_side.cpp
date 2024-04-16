
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{2,3,-1,7,-2,-7};
	int start=0;
	int end=arr.size()-1;
	int z=end;
	int i=0;
	while(start<end)
	{
		if(arr[i]<0)
		{
			swap(arr[i],arr[start]);
			start++;
			i++;
			
			}
		else 
		{
			swap(arr[i],arr[end]);
			end--;
			
			}
		}
	for(i=0;i<z+1;i++){
		cout<<arr[i]<<" ";
		}
   
    return 0;
    
}
