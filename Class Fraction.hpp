//
//  Class Fraction.hpp
//  ДЗ 3 ООП
//
//  Created by Павел on 25.12.2022.
//

#ifndef Class_Fraction_hpp
#define Class_Fraction_hpp
#include <iostream>
#include <stdio.h>

class Fraction {
public:
    Fraction();

    double getNumerator();
    double getDenominator();
    void setDivision(double numerator, double denominator) ;
    double  getRes();
   
    Fraction operator / (Fraction & other);
    Fraction operator * ( Fraction & other);
    Fraction operator + ( Fraction & other);
    Fraction operator - ( Fraction & other);

private:
    double _numerator;
    double _denominator;
    double _res;
};
#endif /* Class_Fraction_hpp */
