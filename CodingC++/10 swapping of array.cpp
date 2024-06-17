#include <iostream>
using namespace std;
int main()
{   int i,j;
    int temp;
    int a[5]={1,2,3,4,5};
    
// To shift elements of a[] to b[]

cout<<"1st array"<<endl;
    for (i=0;i<5;i++){
   
     cout<<a[i]<<endl;
   
}cout<<endl;

int b[5]={6,7,8,9,0};
cout<<"2nd array"<<endl;
for (i=0;i<5;i++)
{
cout<<b[i]<<endl;
}

for (i=0;i<5;i++){
for (j=0;j<5;j++){

           temp=b[i];
           b[i]=a[i];
           a[i]=temp;

}

}
        cout<<endl<<"1st array"<<endl;
        for (i=0;i<5;i++){
        
        cout<<a[i]<<endl;
        
        }
cout<<endl<<"2nd array"<<endl;
for (i=0;i<5;i++){

cout<<b[i]<<endl;

}

}