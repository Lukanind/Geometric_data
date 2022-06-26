#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class piramida
{
public:
	double a, b, c, d;
	

	piramida();
	piramida(const piramida& piramida);
	piramida(double a, double b, double c, double d);
	
	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_d() const;
	


	void set_a(double new_a);
	void  set_b(double new_b);
	void  set_c(double new_c);
	void  set_d(double  new_d);






};
