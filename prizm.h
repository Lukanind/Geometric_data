#pragma once
#ifndef PRIZMA_H
#define PRIZMA_H
#include <iostream>
#include <math.h>

using namespace std;

class prizma
{
private:
	double a, b, c, A, B, C, D, E, F, G, H;
public:
	prizma();
	prizma(const prizma& prizma);
	prizma(double a, double b, double c, double A, double B, double C, double D, double E, double F, double G, double H);



	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_A() const;
	double get_B() const;
	double get_C() const;
	double get_D() const;
	double get_E() const;
	double get_F() const;
	double get_G() const;
	double get_H() const;

	double set_a(double new_a);
	double set_b(double new_b);
	double set_c(double new_c);
	double set_A(double  new_A);
	double set_B(double  new_B);
	double set_C(double  new_C);
	double set_D(double  new_D);
	double set_E(double  new_E);
	double set_F(double  new_F);
	double set_G(double  new_G);
	double set_H(double  new_H);




	double Volume(double a, double b, double c, double A);//triangle

	double Volume(double a, double b, double C, double B);//trapezoid


	double Surface_area(double a, double b, double c, double A);//triangle

	double Surface_area(double a, double b, double c, double A, double C, double B);//trapezoid

};


#endif 
