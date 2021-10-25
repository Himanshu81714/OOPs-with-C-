#include <iostream>

using namespace std;
int RecFact(int n)
{
if(n==0)return 1;
return n*RecFact(n-1);
}
int main()
{
int n;
cout<<"Enter the number: ";
cin>>n;
cout<<"Factorial of "<<n<<" is: "<<RecFact(n)<<endl;

return 0;
}
