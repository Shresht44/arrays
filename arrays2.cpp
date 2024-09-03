//shresht23070123077
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


Enter the number of elements:
3
Enter the elements of the array
2 3 4
Array elements are:
2
3
4

