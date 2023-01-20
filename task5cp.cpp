#include <iostream>
using namespace std;
float dots(int number);
main()
{
    int number;
    cout<<"enter number to get dots of triangle:";
    cin>> number;
    int result = dots(number);
    cout<<result;
}
float dots(int number)
{
    float y=0;
   for (int i=1;i <= number ; i++)
   {
        for(int j=1; j <= i;j++)
        {
            y++;
        }
       
   }

         return y;
}