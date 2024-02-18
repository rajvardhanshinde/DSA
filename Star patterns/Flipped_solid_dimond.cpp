// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
#include<iostream>
using namespace std;
int main(){
    int row,col;
    for ( row = 0; row < 5; row++)
    {
        for ( col = 0; col < 5-row; col++)
        {
            cout<<"*";
        }
        for ( col = 0; col < 2*row+1; col++)
        {
            cout<<" ";
        }
        for ( col = 0; col < 5-row; col++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }  
    for ( row = 0; row < 5; row++){
        for ( col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        for ( col = 0; col < 2*5-2*row-1; col++)
        {
            cout<<" ";
        }
        for ( col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
}





// GENRIC CODE
// [nr no_of_rows]

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr;
//     cout<<"Enter no of rows :";
//     cin>>nr;
//     for ( row = 0; row < nr; row++)
//     {
//         for ( col = 0; col < nr-row; col++)
//         {
//             cout<<"*";
//         }
//         for ( col = 0; col < 2*row+1; col++)
//         {
//             cout<<" ";
//         }
//         for ( col = 0; col < nr-row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl; 
//     }  
//     for ( row = 0; row < nr; row++){
//         for ( col = 0; col < row+1; col++)
//         {
//             cout<<"*";
//         }
//         for ( col = 0; col < 2*nr-2*row-1; col++)
//         {
//             cout<<" ";
//         }
//         for ( col = 0; col < row+1; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;      
//     }
// }