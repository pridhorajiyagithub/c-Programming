#include<iostream>
using namespace std;
// wap to additon of 2 array stor in to another array
int main()
{
	int a[100],b[100],c[100];
    int n1,n2,i;
    cout << "enter first array size::";
    cin >> n1 ;
	
	cout << "enter array element::";
	for(i=0 ; i<n1 ; i++)
	{
		cin >> a[i];
	 } 
	  
	cout << "enter second array size::";
        cin >> n2 ;
	
	cout << "enter array element::";
	for(i=0 ; i<n2 ; i++)
	{
		cin >> b[i];
	 } 
	 
	 cout << "sum of 2 array::" << endl;
	 	for(i=0 ; i<n2 ; i++)
	{
		c[i] = a[i] + b[i];
		cout << c[i] << endl;
	 }
}
