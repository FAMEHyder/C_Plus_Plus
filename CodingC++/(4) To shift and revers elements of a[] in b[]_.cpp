#include <iostream>
using namespace std;
int main()
{   int i;
    int a[5]={1,2,3,4,5};
    
// To shift and revers elements of a[] in b[]

cout<<"elements of a[i]"<<endl;
    for (i=0;i<5;i++){
   
     cout<<a[i]<<endl;
   
}cout<<endl;

int b[5];
cout<<"elements in b[i]"<<endl;
for (i=4;i>=0;i--)
{

b[i]=a[i];
cout<<b[i]<<endl;


}

}