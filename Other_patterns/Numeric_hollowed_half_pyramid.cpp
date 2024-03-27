#include<iostream>
using namespace std;
int main(){
    int row,col;
    for (row = 0; row < 5; row++)
    {
        for ( col = 0; col < row +1; col++)
        {
            if (col == 0 || col == row  || row==5-1)
            {
                cout<<col+1;
            }
            else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    
}



// GENRIC CODE
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr;
//     cout<<"Enter no of rows:"<<endl;
//     cin>>nr;
//     for (row = 0; row < nr; row++)
//     {
//         for ( col = 0; col < row +1; col++)
//         {
//             if (col == 0 || col == row  || row==nr-1)
//             {
//                 cout<<col+1;
//             }
//             else{
//                 cout<<" ";
//             }
            
            
//         }
//         cout<<endl;
//     }
    
// }