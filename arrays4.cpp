//shresht23070123077
#include <iostream>
using namespace std;

int main()
{
int size;
int arr[size];
int i;

int j;
int key;
cout<<"Please Enter size"<<endl;
cin>>size;
for(i=0;i<=size-1;i++)
{
cout<<"Please Enter Numbers: "<<endl;
cin>>arr[i];
}
cout<<"Please Enter Number To be checked"<<endl;
cin>>key;
for(j=0;j<=size-1;j++)
{
if(key==arr[j])
{

cout<<"Key is founded at"<<endl;

}
else
{
cout<<"Key is not found"<<endl;
}
}
return 0;
}
