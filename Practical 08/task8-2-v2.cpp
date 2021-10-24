#include <iostream>

using namespace std;

int main()
{
int arr[] = {10,20,30};

cout << *arr<<endl;

cout << arr<<endl;
for(int i=0; i<3; i++)
{
cout<<*(arr+i)<<" ";

}
cout<<endl;
return 0;
}
