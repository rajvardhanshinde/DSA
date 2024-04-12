#include <iostream>

using namespace std;
int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int sizea = 5;
    int b[] = {1, 3, 6, 5, 10, 12};
    int sizeb = 6;
    int c[] = {21, 4, 1, 8, 6, 32};
    int sizec = 6;
    
    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizeb; j++)
        {
            for (int k = 0; k < sizec; k++)
            {
                if (a[i]==b[j] && a[i]==c[k])
                {
                    cout<<"common elements belongs to all three arrays are :"<<a[i];
                }
                
                
            }
        }
    }

    return 0;
}