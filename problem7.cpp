#include<iostream>
using namespace std;
#include<iomanip>
struct garden
{
    float rad;
};

int main()
{
    garden g;
    float area,circumference;
    cout<<"Enter the radius";
    cin>>g.rad;
    cout<<fixed<<setprecision(2);               //used to print upto desired decimal places
    circumference = 2*3.14*g.rad;
    area= 3.14* g.rad*g.rad;
    cout<<"Circumference : "<<circumference<<endl;
    cout<<"Area : "<<area<<endl;
    
}