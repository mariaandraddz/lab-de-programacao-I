#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  int a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    float mat;
      mat=((a + b)*(c-d)*(e+f)) / 2.0;
      cout<< fixed << setprecision(1);
      cout<<"Eu sou FERA nas continhas e o resultado é "<<mat<<endl;
      return 0;
}
