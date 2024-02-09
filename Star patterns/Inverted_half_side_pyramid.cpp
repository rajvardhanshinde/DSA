// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *


#include<iostream>
using namespace std;

int main(){
    int row,col;
    for ( row = 0; row < 6; row++)
    {
        for ( col = 0; col < 6-row; col++)
        {
            cout<<"*";
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
//     int row,col,nr;
//     cout<<"Enter no of rows :"<<endl;
//     cin>>nr;
//     for ( row = 0; row < nr; row++)
//     {
//         for ( col = 0; col < nr-row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
    
//   return 0;
// }