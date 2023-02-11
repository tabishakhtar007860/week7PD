#include <iostream>
using namespace std;
main()
{
    float p1=0,p2=0,p3=0;
    int num;
    cout<<"enter how many numbers you want";
    cin>>num;
    int number[num];

    for(int x=0;x<num;x++)
    {
        cout<<"enter number:";
        cin>>number[x];   
        

    }
    for(int x=0;x<num ;x++)
    {
        if(number[x]%2==0)
        {
            p1=p1+1;
            
        }
        else if(number[x]%3==0)
        {
            p2=p2+1;
        }
        else if(number[x]%4==0)
        {
            p3=p3+1;

        }
    }
       
       
        cout<<(p1/num)*100<<" p1%"<<endl;
        cout<<(p2/num)*100<<" p2%"<<endl;
        cout<<p3/num*100<<" p3%"<<endl;
}