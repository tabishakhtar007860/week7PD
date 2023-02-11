#include <iostream>
using namespace std;
main()
{
float doctors=7 ,untreated=0,treated=0 ;
int  number;
cout <<"Enter Number of Patients :";
cin >> number;
int  patient[number];

for(int x=0; x < number;x++)
{
    cout <<"Enter Patient on "<<x+1 << "day";
    cin >> patient[x];
}

for( int x=0;x< number;x++)
{
    if( patient[x] > doctors)
    {
        untreated = untreated+patient[x]-doctors ;
        treated = treated+ doctors;
        doctors++;
         //cout <<treated <<"-treated     "<<untreated << " --untreated"<<endl;
    }
    else if( patient[x] <= doctors)
    {
        treated += patient[x];
         // cout <<treated <<" --traeted" <<untreated<<" --untreated"<<endl;
    }
}

    cout <<"Treated = "<<treated;
    cout <<"Untreated = "<<untreated;

}