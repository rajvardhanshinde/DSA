#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={10,20,30,40};
    int sizea=4;
    int b[]={50,60,70};
    int sizeb=3;
    int c[]={80,90};
    int sizec=2;
    vector<int> ans;

    // TRIPLET FOR SUM 80

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(b[i]);
    }
    for (int i = 0; i < sizec; i++)
    {
        ans.push_back(c[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    for (int i = 0; i < ans.size(); i++)
    {
        int element=ans[i];
        for (int j = i+1; j < ans.size(); j++)
        {
            for (int k = j+1; k < ans.size(); k++)
            {
                if (element+ans[j]+ans[k]==80)
                {
                    cout<<"("<<element<<","<<ans[j]<<","<<ans[k]<<")"<<endl;
                }   
            }   
        }   
    }
    
    
}