//
//  main.cpp
//  ДЗ 3 ООП
//
//  Created by Павел on 25.12.2022.
//
#include "Class Fraction.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[]) {
   Fraction F1;
   Fraction F2;
    
    double  tmpNum1,tmpNum2, tmpDen1, tmpDen2;
    std::cout<<"Введите значения перовй дроби: " <<std::endl;
    std::cout<<"Введите числитель   --> ";
    std::cin>>tmpNum1;
    std::cout<<"Введите знаменатель --> ";
    std::cin>>tmpDen1;
    std::cout<<std::endl;
    std::cout<<"Введите значения второй дроби: " <<std::endl;
    std::cout<<"Введите числитель   --> ";
    std::cin>>tmpNum2;
    std::cout<<"Введите знаменатель --> ";
    std::cin>>tmpDen2;
    
// Ввод значений дробей:
    F1.setDivision(tmpNum1,tmpDen1);
    F2.setDivision(tmpNum2,tmpDen2);
   
    
    std::cout<<"\n1 дробь : "<<F1.getNumerator()<<"/"<<F1.getDenominator() <<std::endl;
    std::cout<<"2 дробь : "<<F2.getNumerator()<<"/"<<F2.getDenominator() <<std::endl;
     
    Fraction F3 = F1/F2;
    Fraction F4 = F1*F2;
    Fraction F5 = F1+F2;
    Fraction F6 = F1-F2;


    std::cout<<"\nРезультат деления дробей  :";
    std::cout<<F3.getRes()<<std::endl;
    std::cout<<"Результат умножения дробей  :";
    std::cout<<F4.getRes()<<std::endl;
    std::cout<<"Результат сложения дробей   :";
    std::cout<<F5.getRes()<<std::endl;
    std::cout<<"Результат вычитания дробей  :";
    std::cout<<F6.getRes()<<std::endl;
    std::cout<<std::endl;
    
    return 0;
}
