#include<iostream>
using namespace std;
int main(){
    int row,col;
    for ( row = 0; row < 4; row++)
    {
       for ( col = 0; col < row+1; col++)
       { 
         cout<<row+1;
         if(col != row){
            cout<<"*";
         }
       }
       cout<<endl;   
    }
    for ( row = 0; row < 4; row++)
    {
       for ( col = 0; col < 4-row; col++)
       {   
         cout<<4-row;
          if (col != 4-row-1)
         {
            cout<<"*";
         }
       }
       cout<<endl;     
    }  
}
