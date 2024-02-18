// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

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
//        for ( col = 0; col < row+1; col++)
//        { 
//          cout<<row+1;
//          if(col != row){
//             cout<<"*";
//          }
//        }
//        cout<<endl;   
//     }
//     for ( row = 0; row < nr; row++)
//     {
//        for ( col = 0; col < nr-row; col++)
//        {   
//          cout<<nr-row;
//           if (col != nr-row-1)
//          {
//             cout<<"*";
//          }
//        }
//        cout<<endl;     
//     }  
// }