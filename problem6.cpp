/* taking month number as input and printing the corresponding Month name accordinly
 using class and Enumeration(user-defined datatype)*/

#include <iostream>
using namespace std;

class year {
public:
    enum month {
        jan = 1, feb, march, april, may, jun, july, agust, sep, oct, nov, dec //assinged value from 1.
    };
};

int main()
{
    int m;
    cin>>m;

    switch(m)
    {
        case year::jan:  // use resolution operator(::) coz, enumeration is inside class(year).
        cout<<"Month: Jan";
        break;

        case year::feb:
        cout<<"Month: Feb";
        break;

        case year::march:
        cout<<"Month: march";
        break;

        case year::april:
        cout<<"Month: april";
        break;

        case year::may:
        cout<<"Month: may";
        break;

        case year::jun:
        cout<<"Month: jun";
        break;

        case year::july:
        cout<<"Month: july";
        break;

        case year::agust:
        cout<<"Month: august";
        break;

        case year::sep:
        cout<<"Month: sep";
        break;

        case year::oct:
        cout<<"Month: oct";
        break;

        case year::nov:
        cout<<"Month: nov";
        break;

        case year::dec:
        cout<<"Month: december";
        break;

        default:
        cout<<"INVALID MONTH!";
 
    }
}

    /*However, in your code, you are only using the enumeration values 
    (year::jan, year::feb, etc.) to represent months,
    but you haven't created an instance of the year class.
    Your code directly accesses the enumeration values
    without the need for an object because enumeration values 
    are like constants, and you can 
    access them using the scope resolution operator ::.*/