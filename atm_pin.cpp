#include<iostream>
using namespace std;
int main()
{
    cout<<endl<<"Welcome to the Safest ATM PIN  system! "<<endl;
    cout<<endl;
    cout<<"Set up your four Unique 4-digit ATM PINS"<<endl;
    int pin[4];
    for(int i=1; i<=4;i++)
    {
        cin>>pin[i];
    }
    
    int d;
    int last_pin = 0;
    while (true)
    {
        label1:
        cout<<"Press 0 to Exit or any other integer to continue :"<<endl;
        cin>>d;
        if (d==0)
        {
            break;
        }
        else
        {
            
            cout<<"enter your pin to login "<<endl;
            int p;
            cin>>p;
            for(int j=1; j<=4; j++)
            {
                if( pin[j]==p && p!=last_pin)
                {
                    cout<<"Your transaction is being processed :"<<endl;
                    cout<<"DONE "<<endl;
                    last_pin = pin[j];
                    break;
                }
                else if(j==4)
                {
                    cout<<"please enter a valid pin : "<<endl;
                    goto label1;
                }
                


            }

        }
        
    }

    cout<<"Please visit again :"<<endl;
    
    
}


