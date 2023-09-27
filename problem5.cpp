#include<iostream>
using namespace std;

class Doctor
{
    public:
        string name,address;
        int ward;

        Doctor(string nm,string add,int no)
        {
            this-> name= nm;
            this->address= add;
            this->ward= no;
        }
        void printdetails()
        {
            cout<<"Name : "<<this->name<<endl;
            cout<<"Address : "<<this->address<<endl;
            cout<<"Ward No. : "<<this->ward<<endl;

        }

};

int main()
{
    string name,address;
    int ward;
    cin>>name;
    cin>>address;
    cin>>ward;
    Doctor dr(name,address,ward);
    dr.printdetails();

}