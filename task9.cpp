#include <iostream>
using namespace std;
void nested(int rows);
main()
{   
    int rows;
    cout << "enter desired number of rows:" ;
    cin>> rows;
    nested(rows);
}
void nested(int rows)
{
    for (int i=1;i <= rows;i++)
    {
        for(int z=1;z<= i ;z++)
        {
            cout<<"*";
        }
    for( int j=rows;j >= i;j--)
        {   
        cout<<" ";   
        }
    for(int z=rows;z>= i ;z--)
        {
            cout<<" ";
        }
    for( int j=1;j <= i;j++)
            {   

                     cout<<"*";   
            
            }
    
            
        cout<<endl;
    }
    cout<<"********************************"<<endl;

}