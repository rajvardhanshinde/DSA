#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return true;
        }
        return false;
        
    }
    
}
int main(){
    int arr[30]={2,34,28,59,10};
    int size=5;
    int key;
    cout<<"Enter the value you want to find :"<<endl;
    cin>>key;
    linearsearch(arr,size,key);
    if (linearsearch(arr,size,key))
    {
        cout<<"Found";
    }
    else{
        cout<<"NOT Found";
    }
    
    return 0;

}