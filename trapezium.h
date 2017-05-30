#ifndef _TRAPEZIUM_H__
#define _TRAPEZIUM_H__

class Trapezium :public Shape
{
    float a;
    float b;
    float h;
public:
    Trapezium(float=1, float=1, float=1);
    ~Trapezium();
    void loadData();
    float getArea();
};

#endif
