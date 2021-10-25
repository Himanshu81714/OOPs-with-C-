#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int a=5, b=10; 
cout<<"Before Swap: "<<endl;
cout<<a<<" "<<b<<endl;
swap(&a, &b);
cout<<"After Swap: "<<endl;
cout<<a<<" "<<b<<endl;
return 0;
}
