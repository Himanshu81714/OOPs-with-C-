#include <iostream>

namespace first{

int add(int a, int b)
{
   	int sum;
   	sum=a+b;
	return sum;
}

}
namespace second{

float add(float a, float b)
{
	float sum;
	sum=a+b;
	return sum;
}
}
using namespace first;
using namespace second;
using namespace std;
int main()
{


	cout<<add(1, 2.7f)<<endl;
	return 0;
}
