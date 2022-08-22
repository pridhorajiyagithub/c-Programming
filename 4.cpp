#include<iostream>
using namespace std;
//create calcie using switch case

int main()
{
	int a,b,c;
	char choice;
	cout << "----press-----" << endl
	     << "+ for addition" << endl
	     << "- for substraction" << endl
	     << " * for multiplication" << endl
	     << "/ for divition" << endl
	     << "% for modular" << endl ;     
	     
	cin >> choice;     
	
	cout << "enter a and b value::";
    cin >> a >> b;
	   
	switch(choice)
	{
	   case '+':
                c=a+b;
				cout << c;
				break; 
				
		case '-':	
		        c=a-b;
				cout << c;
				break; 
		
		case '*':
		         c= a*b;
				 cout << c;
				break;
				
		case '/':
		         c = a/b;
				 cout << c;
				break; 
				
		case '%':
		         c= (a*b)/100;
				 cout << c;
				 break;
				 
		default :
		         cout << "enter valid data!!";		  				 				            	
    }     
    return 0;
}
