#include <iostream>
// #include<vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 0, 2, 1, 0, 0, 2};
    int sizea = 8;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    // vector<int> newarr;
    for (int i = 0; i < sizea; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
           
            
        }
        else if (arr[i] == 1)
        {
            count1++;
           
        }
        else
        {
            count2++;
            
        }
        
      
    }
     for (int j = 0; j < count0; j++)
            {
                arr[k+1]=0;
            }
    //   cout<<count0;
        

    for (int i = 0; i <sizea; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}
