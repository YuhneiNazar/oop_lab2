#include "Fraction.h"
#include <iostream>
using namespace std;
int main()
{
    Fraction a,b;
    cout << " Input Number 1: " << endl;
    a.Read();
    a.Display();
    cout << "Input Number 2: " << endl;
    b.Read();
    b.Display();
    a.Vid(a,b);
    a.Mno(a,b);
    a.Com(a,b);
    a.toString();
    return 0;


}
