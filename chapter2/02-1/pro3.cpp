//
// Created by ehdqk on 2023-10-10.
//
#include <iostream>
void SwapPointer(int* (&ptr1),int* (&ptr2))
{
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

}

int main(void)
{
    int num1 =5;
    int *ptr1 = &num1;
    int num2=10;
    int *ptr2 = &num2;
    std::cout<<ptr1<<std::endl;
    std::cout<<ptr2<<std::endl;

    SwapPointer(ptr1,ptr2);

    std::cout<<ptr1<<std::endl;
    std::cout<<ptr2<<std::endl;
}