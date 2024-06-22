#include<iostream>

using namespace std;

int main(){

     int arr[10]={10, 5,13,1,25,80,55,90,100,40};
     
     int x;
     cout<<"Which number do you want to search: ";
     cin>>x;
     int found=-1;

     for( int i=0;i<10;i++)
     {
        if(x==arr[i])
        {
            found=i;
            break;

        }
      
     }

     if(found != -1)
     {
        cout<<x <<" is found at index: "<<found<<endl;
     }
     else{
        cout<<"Not found";

     }

     
    
    return 0;
}