//
// Created by ehdqk on 2023-12-03.
//

#ifndef C__BASIC_03_2_HPP
#define C__BASIC_03_2_HPP


class Calculator
{
private:
    int count_add;
    int count_min;
    int count_div;
    int count_mul;

public:
   void  Init();
   double Add(double a, double b);
   double Div(double a, double b);
   double Min(double a, double b);
   double Mul(double a, double b);
   void ShowOpCount();
};


#endif //C__BASIC_03_2_HPP
