#include <iostream>
using namespace std;
int main()
{
string days[7]={"monday","tuesday","wednasday","Thrusday", "Friday","saturday","sunday"};

for (int i=0;i<=3;i++)
{
cout<<"week"<<i<<endl;

for (int j=0;j<=6;j++)
{
cout<<"\t"<<days[j]<<endl;

}

}
}