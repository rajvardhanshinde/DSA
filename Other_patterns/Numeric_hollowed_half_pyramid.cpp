// *
// * *
// *   *
// *     *
// * * * * *      
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for ( row = 0; row < 5; row++)
    {
        if (row==0)
        {
            cout<<"*";
        }
        else if (row==4)
        {
            for ( col = 0; col < 5; col++)
            {
            cout<<"*";
            }
            
        }
        else{
            if (col==0  || col==row)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}