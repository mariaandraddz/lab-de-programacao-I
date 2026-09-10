#include <iostream>

using namespace std;

int main() 
{
    long int massa, velocidade;
    cin>>massa>>velocidade;
    long int energia;
    energia = massa * (velocidade *velocidade);
    cout<<energia<<endl;
    return 0;
}
