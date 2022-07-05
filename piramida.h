#pragma once
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class piramida
{
public:
	int shet;
	double a, b, c, h, d;
	string vershini[2][4]{
		{"S"},
		{"A","B","C","D"}
	};

	piramida();
	piramida(double a, double b, double h, double d, double c, int shet);
	piramida(double a, double b, double c, double h, int shet);
	piramida(const piramida& piramida);


	double get_a() const;
	double get_b() const;
	double get_h() const;
	double get_c() const;
	double get_d() const;




	double  set_a(double new_a);
	double  set_b(double new_b);
	double  set_h(double new_h);
	double  set_c(double new_c);
	double  set_d(double  new_d);


	double Volume(double a, double b, double h, int shet, double c);
	double Volume56(double a, double b, double c, double h, int shet);

	double All_Area(double a, double b, double d, int shet, double c);
	double All_Area56(double a, double b, double c, double h, int shet);

	string ALL_grani(string vershini[2][4], int shet);

	string ALL_vershini(string vershini[2][4], int shet);

};
