//
// Created by ehdqk on 2023-12-03.
//
#include "03-2.hpp"
#include <iostream>

void Calculator::Init() {
    count_add = 0;
    count_min = 0;
    count_mul = 0;
    count_div = 0;
}

double Calculator::Add(double a, double b) {
    count_add += 1;
    return a + b;
}

double Calculator::Div(double a, double b) {
    count_div += 1;
    return a / b;
}

double Calculator::Min(double a, double b) {
    count_min += 1;
    return a - b;
}

double Calculator::Mul(double a, double b) {
    count_mul += 1;
    return a * b;
}

void  Calculator::ShowOpCount() {
    std::cout<<count_add<<' ';
}

