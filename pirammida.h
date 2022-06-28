#pragma once
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class piramida
{
public:
	double a, b, c, d;
	double Obiom, S_poln;
	string dl_gr, dl_vershin;
	string vershini[2][4]{
		{"S"},
		{"A","B","C","D"}
	};

	piramida();
	piramida(double a, double b, double c, double d, string vershini[2][4]);
	piramida(const piramida& piramida);
	

	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_d() const;
	double get_Obiom() const;
	double get_S_poln() const;
	string get_dl_gr() const;
	string get_dl_vershin() const;



	double  set_a(double new_a);
	double  set_b(double new_b);
	double  set_c(double new_c);
	double  set_d(double  new_d);
	double  set_Obiom(double  new_Obiom);
	double  set_S_poln(double  new_s_poln);
	string  set_dl_gr(string new_dl_gr);
	string  set_dl_vershin(string new_dl_vershin);

	double Volume(double a, double b, double c);

	double All_Area(double a, double b, double d);

	string ALL_grani(string vershini[2][4]);

	string ALL_vershini(string vershini[2][4]);

};

