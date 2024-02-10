// 12345
// 1234
// 123
// 12
// 1

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=0;row<5;row++){
        for(col=0;col<5-row;col++){
            cout<<col+1 ;
        }
        cout<<endl;
    }
}




// GENRIC CODE
// [nr are no_of_rows]


// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr;
//     cout<<"Enter no of rows :";
//     cin>>nr;
//     for(row=0;row<nr;row++){
//         for(col=0;col<nr-row;col++){
//             cout<<col+1 ;
//         }
//         cout<<endl;
//     }
// }