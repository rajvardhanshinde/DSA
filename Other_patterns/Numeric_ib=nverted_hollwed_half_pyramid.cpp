// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     for (row = 0; row < 5; row++)
//     {
//         for ( col = row+1; col <=5; col++)
//         {
//             if (col == row+1 || row == 0  || col==5)
//             {
//                 cout<<col;
//             }
//             else{
//                 cout<<" ";
//             }
            
            
//         }
//         cout<<endl;
//     }
    
// }


// GENRIC CODE
#include<iostream>
using namespace std;
int main(){
    int row,col,nr;
    cout<<"Enter no of rows:"<<endl;
    cin>>nr;
    for (row = 0; row < nr; row++)
    {
        for ( col = row+1; col <=nr; col++)
        {
            if (col == row+1 || row == 0  || col==nr)
            {
                cout<<col;
            }
            else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    
}