#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
    float a, b, c;
      cin>>a>>b>>c;
      float media;
      media = ((a * 4) + (b * 4) + (c * 2))/10;
      cout<<fixed<<setprecision(2);
      cout<<media<<endl;
      return 0;
}
