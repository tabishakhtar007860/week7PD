#include <iostream>
using namespace std;
main()
{
    int tot,number=0;
    cout<<"enter number:";
        cin>>number;
    
    for(int x=1;x<=number;x++)
    {
        
        if( x%4 == 0 )
        {
         tot = x * 10 ;
        cout<<tot;
        }
        else{
            tot=x;
            cout<<tot;
        }
        cout<<endl;
        
    }





}