#include "quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    a_ = a;
    b_ = b;
    c_ = c;
    d_ = d;
    A_ = A;
    B_ = B;
    C_ = C;
    D_ = D;
    name = "Четырехугольник";
}

int Quadrangle::get_a() 
{ 
    return a_; }

int Quadrangle::get_b() 
{ 
    return b_; }

int Quadrangle::get_c() 
{ 
    return c_; }

int Quadrangle::get_d() 
{ 
    return d_; }

int Quadrangle::get_A() 
{ 
    return A_; }

int Quadrangle::get_B() 
{ 
    return B_; }

int Quadrangle::get_C() 
{ 
    return C_; }

int Quadrangle::get_D() 
{ 
    return D_; }

string Quadrangle::get_name() 
{ 
    return name; }

void Quadrangle::print_info()
{
    cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << endl;
    cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << endl << endl;
}
