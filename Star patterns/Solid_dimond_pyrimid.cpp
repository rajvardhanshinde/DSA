//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      *


#include<iostream>
using namespace std;
int main(){
    int row,col,i;
    for ( row = 0; row < 6; row++)
    {
        for ( i = 0; i < 6-row-1; i++)
        {
            cout<<" ";
        }
        for (col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }   
        cout<<endl;
    }
    for ( row = 0; row < 6; row++)
    {
        for ( i = 0; i <row; i++)
        {
            cout<<" ";
        } 
        for ( col = 0; col < 6-row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}





// GENRIC CODE
// [nr is no of rows]

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,i,nr;
//     cout<<"Enter no of rows: ";
//     cin>>nr;
//     for ( row = 0; row < nr; row++)
//     {
//         for ( i = 0; i < nr-row-1; i++)
//         {
//             cout<<" ";
//         }
//         for (col = 0; col < row+1; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for ( row = 0; row < nr; row++)
//     {
//         for ( i = 0; i <row; i++)
//         {
//             cout<<" ";
//         }
//         for ( col = 0; col < nr-row; col++)
//         {
//             cout<<"* ";
//         }      
//         cout<<endl;
//     }
//     return 0;
// }
