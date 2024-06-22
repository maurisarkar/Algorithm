#include<iostream>
#include<string>
using namespace std;

int main(){

    int x;
    bool check= true;
    cout<<"Enter any positive number to check Whether it is Prime or Not: ";
    cin>>x;

    if(x==0 || x==1)
    {
      check = false;

    }

    for(int i=2; i<=x/2;i++)
    {
        if(x%i==0)
        {
            check =false;
            break;
        }
    }

    if(check== false)
    {
        cout<<x <<" is not prime number"<<endl;
    }
    else
    {
        cout<<x <<" is a prime number"<<endl;
    }
    
    return 0;
}