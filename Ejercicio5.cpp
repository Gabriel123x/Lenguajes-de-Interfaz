#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    // Your code here!
    int cont = 1;
    for(int i = 2; i <= 1000; i = pow(2,cont))
{
    cout<<i<<endl;
    cont = cont + 1;
}
    return 0;
}