#include "prizma.h"

using namespace std;

prizma::prizma() : a(0), b(0), c(0), d(0), h(0), h2(0), A(0),B(0),C(0),D(0),E(0),F(0),G(0),H(0){}
prizma::prizma(const prizma& prizma) : a (prizma.a), b(prizma.b), c(prizma.c), d(prizma.d), h(prizma.h), h2(prizma.h2), A(prizma.A),B(prizma.B), C(prizma.C), D(prizma.D), E(prizma.E), F(prizma.F), G(prizma.G), H(prizma.H) {}
prizma::prizma(double a, double b, double c, double d, double h, double h2, double A, double B, double C, double D, double E, double F, double G, double H) : a(a), b(b), c(c),d(d),h(h),h2(h2), A(A), B(B), C(C), D(D), E(E), F(F), G(G), H(H) {}
double prizma::get_a()const { return a; }
double prizma::get_b()const { return b; }
double prizma::get_c()const { return c; }
double prizma::get_d()const { return d; }
double prizma::get_h()const { return h; }
double prizma::get_h2()const { return h2; }
double prizma::get_A()const { return A; }
double prizma::get_B()const { return B; }
double prizma::get_C()const { return C; }
double prizma::get_D()const { return D; }
double prizma::get_E()const { return E; }
double prizma::get_F()const { return F; }
double prizma::get_G()const { return G; }
double prizma::get_H()const { return H; }

double prizma::set_a(double new_a) { a = new_a; }
double prizma::set_b(double new_b) { b = new_b; }
double prizma::set_c(double new_c) { c = new_c; }
double prizma::set_d(double new_d) { d = new_d; }
double prizma::set_h(double new_h) { h = new_h; }
double prizma::set_h2(double new_h2) { h2 = new_h2; }
double prizma::set_A(double new_A) { A = new_A; }
double prizma::set_B(double new_B) { A = new_B; }
double prizma::set_C(double new_C) { A = new_C; }
double prizma::set_D(double new_D) { A = new_D; }
double prizma::set_E(double new_E) { A = new_E; }
double prizma::set_F(double new_F) { A = new_F; }
double prizma::set_G(double new_G) { A = new_G; }
double prizma::set_H(double new_H) { A = new_H; }



double prizma::Volume(double a, double b, double c,double h)//triangle
{
	double p = ((a + b + c) / 2);
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return(S * h);
}
double prizma::Volume(double a, double b, double h, double h2)//trapezoid
{
	double S = (((a * b) / 2) * h);
	return (S*h2);
}


double prizma::Surface_area(double a, double b, double c,double h)//triangle
{
	double p = ((a + b + c) / 2);
	double Sb = ((a + b + c) * A);
	double So= sqrt(p * (p - a) * (p - b) * (p - c));
	return(2 * So + Sb);
}

double prizma::Surface_area(double a, double b, double c,double d, double h,double h2)//trapezoid
{
	double Sb = ((a + b + c+d) * h2);
	double So = (((a * b) / 2) * h);
	return(2 * So + Sb);
}
