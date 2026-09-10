#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  long int t, d;
  long int v, p;
    cin>>t>>d;
    cin>>v>>p;
    long int custo_d;
    custo_d = t * v;
    long int numeros_p;
    numeros_p = t/d;
    long int custo_p;
    custo_p = numeros_p * p;
    long int total;
    total = custo_d + custo_p;
      
    cout<<total<<endl;
    return 0;
}
