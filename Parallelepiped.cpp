#include "Parallelepiped.h"

using namespace std;

parallelepiped::parallelepiped() : a(0), b(0), c(0), h(0) {}
parallelepiped::parallelepiped(double a, double b, double c, double h) : a(a), b(b), c(c), h(h), V(Volume(a,b,h)), S_poln(Surface_area(a,b,c)) {}
parallelepiped::parallelepiped(const parallelepiped& parallelepiped) : a(parallelepiped.a), b(parallelepiped.b), c(parallelepiped.c), h(parallelepiped.h), V(parallelepiped.V), S_poln(parallelepiped.S_poln) {}


double parallelepiped::get_a()const { return a; };
double parallelepiped::get_b()const { return b; };
double parallelepiped::get_c()const { return c; };
double parallelepiped::get_h()const { return h; };
double parallelepiped::get_S_poln()const { return S_poln; };
double parallelepiped::get_V()const { return V; };

double parallelepiped::set_a(double new_a) { a = new_a; return(0); };
double parallelepiped::set_b(double new_b) { b = new_b; return(0); };
double parallelepiped::set_c(double new_c) { c = new_c; return(0); };
double parallelepiped::set_h(double new_h) { h = new_h; return(0); };
double parallelepiped::set_S_poln(double new_S_poln) { S_poln = new_S_poln; return(0); };
double parallelepiped::set_V(double new_V) { V = new_V; return(0); };

double parallelepiped::Volume(double a, double b, double h)
{
	return( a*b*h );
}

double parallelepiped::Surface_area(double a, double b, double c) {
	return(2 * (a * b + b * c + c * a));
}