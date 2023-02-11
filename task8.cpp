#include <iostream>
using namespace std;
main()
{
    int number,sum=0;
    cout <<"Enter number of values to Take:" ;
    cin >> number;
    float train=0,truck=0,minibus=0;

    int cargo[number];
    float average;
    for(int x=0;x<number;x++)   
    {
        cout <<"Enter tonnage of Cargo  "<<x+1<<" : ";
        cin >> cargo[x]; 
        sum=sum+cargo[x];
        
    }

    for(int x=0;x< number;x++)
    {
        if( cargo[x] <= 3)
        {
            minibus= minibus + cargo[x];
        }
        if( cargo[x] >3 && cargo[x] <=11)
        {
            truck = (truck+ cargo[x]);
        }
         if( cargo[x] > 11)
        {
            train = (train + cargo[x]);
        }
    } 
    average = ((minibus*200 + truck*175 + train*120)/sum) ;
    cout <<" Average ="<< average << endl;
    cout <<" MiniBus ="<< (minibus/sum)*100 << endl;
    cout <<"Truck ="<< (truck/sum)*100 << endl;
    cout <<"Train =" << (train/sum)*100 << endl;







}