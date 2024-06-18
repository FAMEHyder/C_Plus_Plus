#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the number to generate table = ";
cin>>a;

cout<<"Enter the multiplier = ";
cin>>b;

cout<<endl<<endl<<"Your table is ready"<<endl<<endl<<endl;
for (int i=1;i<=b;++i)

cout<<"\t"<<a<<"*"<<i<<"="<<a*i<<endl<<endl;
cout<<endl<<endl<<"_____Best of luck______";
return 0 ;
}