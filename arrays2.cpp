#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the number of elements:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;
for (int i = 0; i < n; i++) {
cin>>arr[i];
}
cout<<"Array elements are:"<<endl;
for (int i = 0; i < n; i++) {
cout<<arr[i]<<endl; 
}
return 0;
}
