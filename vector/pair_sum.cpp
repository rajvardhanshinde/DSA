#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b[]={6,7,8};
    int sizea=5;
    int sizeb=3;
   
//    SUM SHOULD BE 9

    vector<int>ans;
    for (int i = 0; i <sizea; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(b[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
     cout<<endl; 
    for (int i = 0; i < ans.size(); i++)
    {
        int element=ans[i];
        for (int j = i+1; j < ans.size(); j++)
        {
           
        //    cout<<"("<<element<<","<<ans[j]<<")"<<endl;
        if (element+ans[j]==9)
        {
            cout<<"("<<element<<","<<ans[j]<<")"<<endl;
        }     
        }
        
    }
    
    
    

}