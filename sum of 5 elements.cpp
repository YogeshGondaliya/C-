#include<iostream>
#include<iomanip>
using namespace std;
void sum(int [5]);
int main()
{
    int a[5],i,j;
    cout<<"enter the 5 elements of array"<<endl;
    for(i=0;i<5;i++)
    {
     cin>>a[i];
    }
    sum(a);
    return 0;
}

void sum(int a[5]){
int i,j,sum=0;
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
cout<<"sum of all elements = "<<sum;
}