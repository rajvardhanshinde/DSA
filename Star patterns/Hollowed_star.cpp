
// * * * * *
// *       *
// * * * * *


#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=0;row<3;row++){
        if(row==0 || row==2){
            for(col=0;col<5;col++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(col=0;col<3;col++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}








// GENRIC CODE
// [In the below code nr  are no_of_rows and nc no_of_cols.]


// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr,nc;
//     cout<<"Enter no of rows :"<<endl;
//     cin>>nr;   
//     cout<<"Enter no of cols :"<<endl;
//     cin>>nc;
//     for(row=0;row<nr;row++){
//         if(row==0 || row==nr-1){                                     
//             for(col=0;col<nc;col++){
//                 cout<<"*";
//             }
//         }
//         else{
//             cout<<"*";
//             for(col=0;col<nc-2;col++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }