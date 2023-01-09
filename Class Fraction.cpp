//
//  Class Fraction.cpp
//  ДЗ 3 ООП
//
//  Created by Павел on 25.12.2022.
//

#include "Class Fraction.hpp"
#include <iostream>

Fraction::Fraction(){}

double Fraction:: getNumerator(){
    return _numerator;
}
double Fraction:: getDenominator(){
    return _denominator;
}
void Fraction::setDivision(double numerator, double denominator){
    _numerator = numerator;
    _denominator =denominator;
}
double Fraction:: getRes(){
    return _res;

}
Fraction Fraction::operator / ( Fraction & other){
    Fraction tmp;
    tmp._res=((this->_numerator*other._denominator)/(this->_denominator*other._numerator));
    return tmp;
}
  
Fraction Fraction::operator * ( Fraction & other){
    Fraction tmp;
    tmp._res=((this->_numerator*other._numerator)/(this->_denominator*other._denominator));
    return tmp;
}
Fraction Fraction::operator + ( Fraction & other){
    Fraction tmp;
    tmp._res=((this->_numerator*other._denominator)+(this->_denominator*other._numerator))/(this->_denominator*other._denominator);
    return tmp;
}
Fraction Fraction::operator - ( Fraction & other){
    Fraction tmp;
    tmp._res=((this->_numerator*other._denominator)-(this->_denominator*other._numerator))/(this->_denominator*other._denominator);
    return tmp;
}
   
