//
// Created by ehdqk on 2023-10-10.
//
#include <iostream>


int adding(int &value)
{
    value += 1;

    return value;

}

int changing(int &value)
{
    value = -value;

    return value;


}

int main()
{
    int val = 3;

    adding(val);
    std::cout<<val<<std::endl;
    changing(val);
    std::cout<<val<<std::endl;
    return 0;

}