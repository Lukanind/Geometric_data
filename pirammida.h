#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class piramida
{
public:
	double a, b, c, d;
	double Obiom, S_poln;

	piramida();
	piramida(const piramida& piramida);
	piramida(double a, double b, double c, double d);

	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_d() const;
	double get_Obiom() const;
	double get_S_poln() const;



	double  set_a(double new_a);
	double  set_b(double new_b);
	double  set_c(double new_c);
	double  set_d(double  new_d);
	double  set_Obiom(double  new_Obiom);
	double  set_S_poln(double  new_s_poln);

	double Volume(double a, double b, double c);

	double All_Area(double a, double b, double d);

};

