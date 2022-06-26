#include "piramida.h"

using namespace std;

piramida::piramida() : a(0), b(0), c(0), d(0) {}
piramida::piramida(const piramida& piramida) : a(piramida.a), b(piramida.b), c(piramida.c), d(piramida.d) {}
piramida::piramida(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}

double piramida::get_a()const { return a; }
double piramida::get_b()const { return b; }
double piramida::get_c()const { return c; }
double piramida::get_d()const { return d; }


void  piramida::set_a(double new_a) { a = new_a; }
void  piramida::set_b(double new_b) { b = new_b; }
void  piramida::set_c(double new_c) { c = new_c; }
void  piramida::set_d(double new_d) { d = new_d; }



