#include <iostream>
using namespace std;

class A{
public:
int x;
protected:
int y;
private:
int z;

};
class B: protected A
{
public:
void display()
{
x=10;
y=20;
//z=30; error will be thrown by the compiler
cout<<x<<" "<<y<<endl;
 }

};
int main()
{
B obj;
//obj.x=30; error will be thrown by the compiler
//obj.y=40; error will be thrown by the compiler
//obj.z=50; error will be thrown by the compiler
obj.display();

return 0;
}
