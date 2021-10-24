#include <iostream>

using namespace std;

int main()
{
int a = 10;
cout<<"Before a = "<<a<<endl;
int *p;

int **q;

p = &a;

q = &p;
**q=78;
cout<<"After a =  "<<a<<endl;
return 0;
}
