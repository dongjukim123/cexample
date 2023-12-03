//
// Created by ehdqk on 2023-10-11.
//
#include <iostream>
int main()
{
    const int num = 12;

    const int* ptr = &num;

    const int* &ref = ptr;

    std::cout<<*ref<<std::endl;
    std::cout<<*ptr<<std::endl;

    return 0;
}