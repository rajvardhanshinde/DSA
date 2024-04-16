#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,0,0,2,1,1,2};
	int sizea=8;
	int k=0;
	int count0=0;
	int count1=0;
	int count2=0;
	for(int i=0;i<sizea;i++)
	{
		if(arr[i]==0){
		 count0++; 
		 } 
		else if(arr[i]==1)
		 { 
			 count1++; 
			 }
		else if(arr[i]==2){
			count2++;
			}
		}
		while(count0){
			arr[k]=0;
			k++;
			count0--;
			}
			while(count1){
			arr[k]=1;
			k++;
			count1--;
			}
			while(count2){
			arr[k]=2;
			k++;
			count2--;
			}
			for(int i=0;i<sizea;i++)
			{
				cout<<arr[i];
				}
	return 0;
}
