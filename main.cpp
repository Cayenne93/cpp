#include <iostream>
#include <iomanip> //isvesties formatavimui
#include <cmath>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int plotas , perim;
    if(n!=m) //jeigu krastines nelygios
    {
        perim=2*n+2*m;
        cout<<perim;
    }
    else{
        plotas=m*n;
        cout<<plotas;
    }
    return 0;
}
