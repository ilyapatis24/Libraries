#include "rectangular_triangle.h"
#include "equilateral_triangle.h"
#include "rectangle.h"
#include "square.h"


void print_info(Triangle& figure)
{
	cout << figure.get_name() << ": " << endl;
	figure.print_info();
};

void print_info1(Quadrangle& figure)
{
    cout << figure.get_name() << ": " << endl;
    figure.print_info();
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RectangularTriangle rectangularTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhomb rhomb(30, 30, 40);

    print_info(triangle);
    print_info(rectangularTriangle);
    print_info(isoscelesTriangle);
    print_info(equilateralTriangle);
    print_info1(quadrangle);
    print_info1(rectangle);
    print_info1(square);
    print_info1(parallelogram);
    print_info1(rhomb);
    return 0;
};