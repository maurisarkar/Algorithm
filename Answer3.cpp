#include<iostream>

using namespace std;

int main(){

    int arr[10]={10, 5,13,1,25,80,55,90,100,40};

    int min= arr[0];
    for (int i=0;i<10; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }


    }

    cout<<"largest number in this List: "<<min<<endl;
    
    
    return 0;
}