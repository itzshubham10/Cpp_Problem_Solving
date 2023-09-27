/*Your task is to create the class Money with two attributes:

int rupee
int paisa
Include getters, setters, and constructors.

In the main method, initialize the values for the data members, get two amounts, and print their sum.*/



#include<iostream>
using namespace std;


class money
{
    public:

        float rupee1,paisa1,rupee2,paisa2,a,b,sum;              

        money(int ru1,int pai1,int ru2,int pai2)
        {
            this->rupee1= ru1;    
            this->paisa1 = pai1;
            this->rupee2=ru2;
            this->paisa2=pai2;

        }
        void operation()
        {
            
            a=rupee1+paisa1/100.0;
            b= rupee2+paisa2/100.0;
            sum=a+b;
            cout<<sum;            
        }
        void amount()
        {
            cout<<sum;
        }
    

};

int main()
{
    int rs1, p1,rs2,p2;
    
  
        cin>>rs1;   
        cin>>p1; 
        cin>>rs2;   
        cin>>p2; 
        money shm(rs1,p1,rs2,p2);
        shm.operation();
        
        
    
    
    

}

