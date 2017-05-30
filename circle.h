#ifndef _CIRCLE_H__
#define _CIRCLE_H__

class Circle :public Shape
{
    float r;
public:
    Circle(float=1);
    ~Circle();
    void loadData();
    float getArea();
};

#endif
