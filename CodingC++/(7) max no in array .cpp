#include <iostream>
using namespace std;
int main()
{
    int n;
    int max=0;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int a[n];

    cout<<"Enter array"<<endl;
    for (int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
    if (a[j]>max){
    
    max=a[j];
    }
    
    }
cout<<"max no in array is = "<<max;


}