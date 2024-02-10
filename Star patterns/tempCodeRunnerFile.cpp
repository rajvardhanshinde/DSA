#include<iostream>
using namespace std;
int main(){
    int row,col,i;
    for ( row = 0; row < 6; row++)
    {
        for ( i = 0; i < 6-row; i++)
        {
            cout<<" ";
        }
         for ( col = 0; col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
