#include<iostream>
using namespace std;
//wap to convert string in to toggle case.

int main()
{
	int i;
	char a[100];
	
	cout << "enter string::"
	gets(a);
	
	for(i=0;i<='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
		else if(a[i]>='a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	
	puts(a);
	return 0;
	
}
