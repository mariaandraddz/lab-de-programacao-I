#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  long int a, b;
     long int y, l, ah;
    cin>>a>>b>>y>>l>>ah;
    long int multi;
    multi = a * b;
      long int novo1;
      novo1 = (multi + y);
      long int novo2;
      novo2 = (multi + l);
      long int n3;
      n3 = (multi + ah);
      cout<<"Yoda " << novo1<<endl;
      cout<<"Luke " << novo2<<endl;
      cout<<"Ahsoka " <<n3<<endl;
    return 0;
}
