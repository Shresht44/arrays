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



Please Enter size
3
Please Enter Numbers:
3 4 5
Please Enter Numbers:
Please Enter Numbers:
Please Enter Number To be checked
4
Key is not found
Key is founded at
Key is not found

--------------------------------
Process exited after 7.915 seconds with return value 0
Press any key to continue . . .
