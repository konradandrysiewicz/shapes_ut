#ifndef _TRIANGLE_H__
#define _TRIANGLE_H__

class Triangle :public Shape
{
    float a;
    float h;
public:
    Triangle(float=1, float=1);
    ~Triangle();
    void loadData();
    float getArea();
};

#endif
