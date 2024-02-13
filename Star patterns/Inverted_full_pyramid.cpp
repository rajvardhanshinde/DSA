// * * * * * * * 
//   * * * * *
//    * * * *
//     * * *
//      * *
//       * 

#include<iostream>
using namespace std;
int main(){
    int row,col,i;
    for(row=0;row<6;row++){

        // Below for loop is for the space befor the stars
        for ( i = 0; i <= row; i++)
        {
            cout<<" ";
        }
        // Below for loop is for  stars
        for (col = 0; col < 6-row; col++)
        {
            cout<<"* ";
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
//     int row,col,i,nr;
//     cout<<"Enter no of rows :";
//     cin>>nr;
//     for(row=0;row<nr;row++){

//         // Below for loop is for the space befor the stars
//         for ( i = 0; i <= row; i++)
//         {
//             cout<<" ";
//         }
//         // Below for loop is for  stars
//         for (col = 0; col < nr-row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
        
        
//     }
//     return 0;
// }