#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  int n;
    cin>>n;
    int horas;
    horas = n/3600;
    int min;
    min = (n%3600)/60;
    int seg;
    seg = n%60;
    
      
    cout<<horas<<"h" << " "<<min<<"m"<< " " <<seg<<"s"<<endl;
    return 0;
}
