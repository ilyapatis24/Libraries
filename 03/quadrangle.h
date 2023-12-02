#pragma once
#include <iostream>

using namespace std;

class Quadrangle
{
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    string get_name();

    virtual void print_info();

protected:
    int a_, b_, c_, d_, A_, B_, C_, D_;
    string name;
};