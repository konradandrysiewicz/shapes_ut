#include <iostream>
#include <math.h>
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "trapezium.h"
#include <stdlib.h> 
#include <gtest/gtest.h>

using namespace std;

//g++ test.cpp square.cpp rectangle.cpp triangle.cpp circle.cpp trapezium.cpp -o test -lgtest -lpthread

//KWADRAT - POPRAWNOSC OBLICZENIA POLA FIGURY
TEST(Square, CheckAreaCorrect) 
{
	Square s(10);
	EXPECT_EQ(100, s.getArea());
	
}


//PROSTOKAT - POPRAWNOSC OBLICZENIA POLA FIGURY
TEST(Rectangle, CheckAreaCorrect) 
{
	Rectangle r(10, 5);
	EXPECT_EQ(50, r.getArea());
	
}

//TROJKAT - POPRAWNOSC OBLICZENIA POLA FIGURY
TEST(Triangle, CheckAreaCorrect) 
{
	Triangle t(20, 5.5);
	EXPECT_EQ(55, t.getArea());
	
}

//KOLO - POPRAWNOSC OBLICZENIA POLA FIGURY
TEST(Circle, CheckAreaCorrect) 
{
	Circle c(2.5);
	EXPECT_NEAR(19.634, c.getArea(), 0.001);
	
}

//TRAPEZ - POPRAWNOSC OBLICZENIA POLA FIGURY
TEST(Trapezium, CheckAreaCorrect) 
{
	Trapezium tr(5, 10, 15);
	EXPECT_EQ(112.5, tr.getArea());
	
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
  






