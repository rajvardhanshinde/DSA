    #include<iostream>
    using namespace std;
    int main(){
        int row,col;
        for ( row = 0; row < 5; row++)
        {
            //for space
            for ( col = 0; col < 5-row-1; col++)
            {
                cout<<" ";
            }
            //for star      
            for ( col = 0; col < 2*5+1; col++)
            {
                
                if (col == 0 || col == 2*row)
                {
                   cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
            }
            cout<<endl;  
        }
        for ( row = 0; row < 5; row++)
        {
            //for space
            for ( col = 0; col < row; col++)
            {
                cout<<" ";
            }
            //for star
            for ( col = 0; col < 2*5-2*row-1; col++){
                if (col == 0 || col == 2*5-2*row-2)
                {
                     cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                
            }
            cout<<endl;
            
        }
        
        
    }




// GEBRIC CODE
// [nr is no_of_rows]
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,nr;
//     cout<<"Enter no of rows :";
//     cin>>nr;
//     for ( row = 0; row < nr; row++)
//     {
//         //for space
//         for ( col = 0; col < nr-row-1; col++)
//         {
//             cout<<" ";
//         }
//         //for star      
//         for ( col = 0; col < 2*nr+1; col++)
//         {
            
//             if (col == 0 || col == 2*row)
//             {
//                cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;  
//     }
//     for ( row = 0; row < nr; row++)
//     {
//         //for space
//         for ( col = 0; col < row; col++)
//         {
//             cout<<" ";
//         }
//         //for star
//         for ( col = 0; col < 2*nr-2*row-1; col++){
//             if (col == 0 || col == 2*nr-2*row-2)
//             {
//                  cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
        
//     }
    
    
// }