#include "pirammida.h"

using namespace std;

piramida::piramida() : a(0), b(0), c(0), d(0) {}
piramida::piramida(const piramida& piramida) : a(piramida.a), b(piramida.b), c(piramida.c), d(piramida.d), Obiom(piramida.Obiom), S_poln(piramida.S_poln) {}
piramida::piramida(double a, double b, double c, double d) : a(a), b(b), c(c), d(d), Obiom(Volume(a, b, c)), S_poln(All_Area(a, b, d)) {}

double piramida::get_a()const { return a; }
double piramida::get_b()const { return b; }
double piramida::get_c()const { return c; }
double piramida::get_d()const { return d; }
double piramida::get_Obiom()const { return Obiom; }
double piramida::get_S_poln()const { return S_poln; }


double  piramida::set_a(double new_a) { a = new_a; return(0); }
double  piramida::set_b(double new_b) { b = new_b; return(0); }
double  piramida::set_c(double new_c) { c = new_c; return(0); }
double  piramida::set_d(double new_d) { d = new_d; return(0); }
double  piramida::set_Obiom(double new_Obiom) { Obiom = new_Obiom; return(0); }
double  piramida::set_S_poln(double new_S_poln) { S_poln = new_S_poln; return(0); }

double piramida::Volume(double a, double b, double c)
{
	return((a * b * c) / 3);
}

double piramida::All_Area(double a, double b, double d)
{
	return(a * b + d * a + d * b);
}
