#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  float x;
    float n1, n2, n3, n4, n5;
    cin>>x>>n1>>n2>>n3>>n4>>n5;
    float media;
    media = ((n1 + n2+ n3+ n4+ n5)) / 5;
    cout<<x<<" " <<fixed << setprecision(1)<< media<<endl;
    
    return 0;
}
