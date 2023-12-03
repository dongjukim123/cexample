//
// Created by ehdqk on 2023-10-11.
//
#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point* ptr;
    ptr->xpos = p1.xpos +p2.xpos;
    ptr->ypos = p1.ypos + p2.ypos;

    return *ptr;

}

int main()
{
    Point* pptr1 = new Point;

    pptr1->xpos = 10;
    pptr1->ypos = 20;

    Point* pptr2 = new Point;

    pptr2->xpos = 40;
    pptr2->ypos = 30;

    Point &pref = PntAdder(*pptr1,*pptr2);

    std::cout<<pref.xpos<<std::endl;
    std::cout<<pref.ypos<<std::endl;


    delete pptr1;
    delete pptr2;


}
