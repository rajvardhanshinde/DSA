// ******
// *   * 
// *  * 
// * * 
// ** 
// *


#include<iostream>
using namespace std;
int main(){
    int row,col;
    for ( row = 0; row < 6; row++)
    {
        if(row==0){
            for ( col = 0; col < 6; col++)
            {
               cout<<"*";
            }   
        }
        else if(row==5){
            cout<<"*"; 
        }
        else{
            cout<<"*";
            for ( col = 0; col < 6-row-2; col++)
            {
                cout<<" ";
            }
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
//     int row,col,nr;
//     cout<<"Enter no of rows :";
//     cin>>nr;
//     for ( row = 0; row < nr; row++)
//     {
//         if(row==0){
//             for ( col = 0; col < nr; col++)
//             {
//                cout<<"* ";
//             }   
//         }
//         else if(row==nr-1){
//             cout<<"* "; 
//         }
//         else{
//             cout<<"* ";
//             for ( col = 0; col < nr-row-2; col++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }