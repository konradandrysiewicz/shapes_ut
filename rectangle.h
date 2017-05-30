#ifndef _RECTANGLE_H__
#define _RECTANGLE_H__

class Rectangle :public Shape
{
    float a;
    float b;
public:
    Rectangle(float=1, float=1);
    ~Rectangle();
    void loadData();
    float getArea();
};

#endif
