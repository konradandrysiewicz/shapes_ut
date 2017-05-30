#ifndef _SQUARE_H__
#define _SQUARE_H__

class Square :public Shape
{
    float a;
public:
    Square(float=1);
    ~Square();
    void loadData();
    float getArea();
};

#endif
