//       * 
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *

#include<iostream>
using namespace std;
int main(){
    int row,col,i;
    for ( row = 0; row < 6; row++)
    {
         // Below for loop is for the space befor the stars
        for ( i = 0; i < 6-row; i++)
        {
            cout<<" ";
        }
         // Below for loop is for  stars
         for ( col = 0; col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}


// GENRIC CODE
// [nr is no of rows]


// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,i,nr;
//     cout<<"Enter no of rows :";
//     cin>>nr;
//     for ( row = 0; row < nr; row++)
//     {
//         for ( i = 0; i < nr-row; i++)
//         {
//             cout<<" ";
//         }
//          for ( col = 0; col<row+1;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }