#include <iostream>

using namespace std;

int main()
{
	int date, year, options;
	string month;
	cout<<"Enter today's date, month, year: ";
	cin>>date>>month>>year;
	while(1)
	{
	cout<<"\nEnter the options to display"<<endl;
	cout<<"1.Date\n2.Month\n3.Year\n"<<endl;
	cin>>options;
	switch(options)
	{
	case 1:
	{cout<<"Date: "<<date<<endl;
	break;
	}
	case 2:
	{
		cout<<"Month: "<<month<<endl;
	break;
	}	
	case 3:
	{
		cout<<"Year: "<<year<<endl;
		break;
	}
	default:
	{
		cout<<"Print not applicable"<<endl;
		goto end;
	}
	}
	}
end:	
	return 0;
}
