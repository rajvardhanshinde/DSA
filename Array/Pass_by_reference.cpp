#include<iostream>
using namespace std;
void inc(int arr[],int size){
    arr[0]=20;
    arr[1]=30;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printarray(int arr[],int size){
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" "   ;
}

}


int main(){
int arr[2]={2,3};
int size=2;
inc(arr,size);
printarray(arr,size);
return 0;
}