#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"B24CE1096";
    int n,s,server_no,i,key;
    char ch;
    cout<<"\nEnter no of servers available:";   //input table size
    cin>>n;

    while(1)
    { 
        key=0;
        string ip;
        cout<<"\nEnter customer IP address:";      // input customer id or key
        cin>>ip;
        s=ip.length();                          //Find length of ip address string
        for(i=8;i<s;i++)
        {
            string sub = ip.substr(i,1);       //Extract one character from string
            int myint1 = stoi(sub);            //Convert extracted char/string to int
            key+=myint1;                       //add the converted int to key
           
        }
         cout<<"\nkey is:"<<key;               //Key
        server_no=key%n;                       //Finding Hash value
        cout<<"\nThis request is given to server number--"<<server_no+1;   
        cout<<"\n\nDo you wish to continue?(y/n):";
        cin>>ch;
        if(ch=='n' || ch=='N')
        {
        cout<<"\nProgram exited";
        break;

        }
    }

}

