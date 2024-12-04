#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	char ch;
	
	cout<<"Please enter a charachter:"<<endl;
	cin>>ch;
	
	switch ( ch )
 {
	
	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'o' :
	case 'O' :
	case 'u' :
	case 'U' :
	case 'I' :
	case 'i' : cout<<"Congrats! It's a vowel.";break;
	default  : cout<<"Oh! it's a consenant.";
 } 


}
