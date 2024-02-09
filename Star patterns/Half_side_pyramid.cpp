
// *
// * *
// * * *
// * * * *
// * * * * *


#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=0;row<5;row++){
        for(col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}    





// [ In the below code nr  are no_of_rows.
// You can print no of rows that you reqired and you will automatically get the right side pyramid considering the order of right side pyramid . ]



// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr;
//     cout<<"Enter no of rows :"<<endl;
//     cin>>nr;

//     for(row=0;row<nr;row++){
//         for(col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }