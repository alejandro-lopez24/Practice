#include <cmath>
#include "Variables.h"

double Var::getSum(){
    double sum=(this->getVar1() + this->getVar2());
    return sum;
}

double Var::getSub(){
    double sub=(this->getVar1() - this->getVar2());
    return sub;
}

double Var::getDiv(){
    double div=(this->getVar1() / getVar2());
    return div;
}

double Var::getMult(){
    double mult=(this->getVar1() * this->getVar2());
    return mult;
}

Var Var::getLargest(Var vars[]){
    if(vars[0].getVar1() > vars[1].getVar2()){
        return vars[0];
    }
    else {
        return vars[1];
    }
}