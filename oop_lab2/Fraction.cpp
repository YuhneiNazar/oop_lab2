#include "Fraction.h"
#include <iostream>
#include <string> 
#include <sstream>
using namespace std;


void Fraction::init(int f, int s) {
    first = f;
    second = s;
}

void Fraction::Read() {
    
    cout << "input whole part = ";
    cin >> first;
    cout << "input fraction part = ";
    cin >> second;
   

}
void Fraction::Display() {
    cout << first << "." << second << endl;
}
string Fraction::toString() const {
    stringstream k; 
    k << "fisrt = " <<first<< endl; 
    return k.str(); 
}
Fraction Fraction::Vid(Fraction r, Fraction l) {
 cout << "Subtraction: " << r.first - l.first << "." << r.second - l.second << endl;
    return r,l;
 
}
Fraction Fraction::Mno(Fraction r, Fraction l) {
    cout << "Multiplication: " << r.first * l.first << "." << r.second * l.second << endl;
    return r, l;

}

Fraction Fraction::Com(Fraction r, Fraction l) {
    if (r.first == l.first && r.second == l.second)
    {
        cout << "Are Equal" << endl;
    }
    else {
        if ((r.first - l.first) > 0) {
            cout << "Number 1 > Number 2\n\n";
        }
        else {
            cout << "Number 1 < Number 2\n\n";
        }
    }
    return r, l;
}