#include <iostream>
using namespace std;
main()
{   
    int rows;
    cout<<"enter rows:";
    cin>> rows;
    for(int i=1;i <=rows;i++)
        {
                for( int j=15;j >= i; j--)
                {
                    cout<<"*";
                }

                cout<<endl;

        }


}