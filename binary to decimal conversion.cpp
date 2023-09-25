// conversion of Binary to decimal

#include<iostream>
using namespace std;
#include <cmath>

//*********** Method:1 BY the concept of loop*****************


int main()
{
    int b,num,temp,power=0,convert,sum=0;
    cout<<"Enter a binary number : ";
    cin>>b;
    num =b;
    while (num!=0)  
    {
        temp= num%10;       
        convert= temp* pow(2,power);
        sum=sum+convert;
        num= num/10;   
        power++;

    }
    cout<<"Equivalent binary number is : "<<sum;

}


//************* Method:2  BY the concept of array******************


int main()
{
    int n,i,j,temp,power=0,sum=0;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout<<"\n enter elements in an array\n";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=n-1;j>=0;j--)
    {
        temp= arr[j]*pow(2,power);
        sum= sum+temp;
        power++;
    }
    cout<<sum;
    
}

/* in case of array if we reverse the loop then the power will initialize with 0 (Gennerally),
 if loop will start straight then the power will start with (SIZEofArray-1).*/