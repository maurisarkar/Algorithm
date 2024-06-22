#include<iostream>

using namespace std;

int main(){

    int arr[10]={10, 5,13,1,25,80,55,90,100,40};

    int max= arr[0];
    for (int i=0;i<10; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }


    }
    int second_largest =arr[0];

    for (int i=0;i<10; i++)
    {
        if(second_largest<arr[i])
        {
            if(max != arr[i])
            {
            second_largest=arr[i];
            }
        }


    }



    cout<<"2nd largest number in this List: "<<second_largest<<endl;
    
    
    return 0;
}