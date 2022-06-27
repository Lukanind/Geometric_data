#include "Parallelepiped.h"
#include <cmath>
#define PI 3.14159265

using namespace std;

parallelepiped::parallelepiped() : a(0), b(0), c(0), h(0) {}
parallelepiped::parallelepiped(double _a, double _b, double _c, double _h, double _DAB, double _A1AB, double _A1AD) : a(_a), b(_b), c(_c), h(_h) , DAB(_DAB), A1AB(_A1AB), A1AD(_A1AD), V(_V), S_poln(_S_poln) {}
parallelepiped::parallelepiped(const parallelepiped& parallelepiped) : a(parallelepiped.a), b(parallelepiped.b), c(parallelepiped.c), h(parallelepiped.h), DAB(parallelepiped.DAB), 
									A1AB(parallelepiped.A1AB), A1AD(parallelepiped.A1AD), V(parallelepiped.V), S_poln(parallelepiped.S_poln) {}


double parallelepiped::get_a()const { return a; };
double parallelepiped::get_b()const { return b; };
double parallelepiped::get_c()const { return c; };
double parallelepiped::get_h()const { return h; };
double parallelepiped::get_DAB()const { return DAB; };
double parallelepiped::get_A1AB()const { return A1AB; };
double parallelepiped::get_A1AD()const { return A1AD; };
double parallelepiped::get_V()const { return V; };
double parallelepiped::get_S_poln()const { return S_poln; };

double parallelepiped::set_a(double new_a) { a = new_a; return(0); };
double parallelepiped::set_b(double new_b) { b = new_b; return(0); };
double parallelepiped::set_c(double new_c) { c = new_c; return(0); };
double parallelepiped::set_h(double new_h) { h = new_h; return(0); };
double parallelepiped::set_DAB(double new_DAB) { DAB = new_DAB; return(0); };
double parallelepiped::set_A1AB(double new_A1AB) { A1AB = new_A1AB; return(0); };
double parallelepiped::set_A1AD(double new_A1AD) { A1AD = new_A1AD; return(0); };
double parallelepiped::set_V(double new_V) { V = new_V; return(0); };
double parallelepiped::set_S_poln(double new_S_poln) { S_poln = new_S_poln; return(0); };

double parallelepiped::Surface_grani(double a, double b, double corner) {
	return (b * (a * sin(corner * PI / 180)));
}
double parallelepiped::Volume(double a, double b, double h)
{
	return( a*b*h );
}
double parallelepiped::Volume(double a, double b, double h, double corner) {
	return(h * Surface_grani(a, b, DAB));
}

double parallelepiped::Surface_area(double a, double b, double c) {
	return(2 * (a * b + b * c + c * a));
}
double parallelepiped::Surface_area(double a, double b, double c, double DAB, double A1AB, double A1AD) {
	double s1, s2, s3;
	s1 = Surface_grani(a, b, DAB);
	s2 = Surface_grani(a, c, A1AB);
	s3 = Surface_grani(b, c, A1AD);
	return(2 * (s1+s2+s3));
}
