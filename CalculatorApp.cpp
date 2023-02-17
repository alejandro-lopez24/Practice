#include <cmath>
#include <iostream>
#include "Variables.h"

using namespace std;

int main(){
    Var example(10,20);
    cout << "Sum of" << example.getVar1() << "and" << example.getVar2() << "is: " << example.getSum() << endl;
    cout << "Subtraction of" << example.getVar1() << "and" << example.getVar2() << "is: " << example.getSub() << endl;
    cout << "Division of" << example.getVar1() << "and" << example.getVar2() << "is: " << example.getDiv() << endl;
    cout << "Multiplication of" << example.getVar1() << "and" << example.getVar2() << "is: " << example.getMult() << endl;
    return 0;
}