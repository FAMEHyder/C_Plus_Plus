#include <iostream>
using namespace std;
int main()
{
int b,c,i,j;
    cout<<"Enter size of row"<<endl;
    cin>>b;
    
    cout<<endl<<"Enter size of colomn"<<endl;
    cin>>c;
    cout<<endl;
    
    cout<<"Array before transpose"<<endl;
    int a[b][c];
    
    for(i=0;i<b;i++)
    {
    for (j=0;j<c;j++)
    {
    
    cin>>a[i][j];
    
    }cout<<endl;
    
    }
    cout<<endl<<"Array after transpose"<<endl;
    for(i=0;i<b;i++){
    
    for (j=0;j<c;j++){
    
    cout<<a[j][i]<<" ";
    }cout<<endl;
    }


}