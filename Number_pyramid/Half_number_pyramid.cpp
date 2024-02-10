// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=0;row<5;row++){
        for(col=0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    return 0;
}





// GENRIC CODE
// [nr are no_of_rows]

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr;
//     cout<<"Enter no of rows :"<<endl;
//     cin>>nr;
//     for(row=0;row<nr;row++){
//         for(col=0;col<row+1;col++){
//             cout<<col+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
