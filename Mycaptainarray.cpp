#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int i;

    cout<<"Enter the elements of the array : "<<endl;

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"Elements of the array are : "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(arr + i)<<endl;
    }

    return 0;
}
