#include <iostream>
#include "piramida.h"
#include "cmath"
#define PI 3.14159265

using namespace std;

piramida::piramida() : a(0), b(0), h(0), d(0), shet(0) {}
piramida::piramida(const piramida& piramida) : a(piramida.a), b(piramida.b), h(piramida.h), c(piramida.c), shet(piramida.shet), d(piramida.d) {}
piramida::piramida(double a, double b, double h, double d, double c, int shet) : a(a), b(b), h(h), d(d), c(c) {}
piramida::piramida(double a, double b, double c, double h, int shet) : a(a), b(b), c(c), h(h) {}


double piramida::get_a()const { return a; }
double piramida::get_b()const { return b; }
double piramida::get_h()const { return h; }
double piramida::get_c()const { return c; }
double piramida::get_d()const { return d; }


double  piramida::set_a(double new_a) { a = new_a; return(0); }
double  piramida::set_b(double new_b) { b = new_b; return(0); }
double  piramida::set_h(double new_h) { h = new_h; return(0); }
double  piramida::set_c(double new_c) { c = new_c; return(0); }
double  piramida::set_d(double new_d) { d = new_d; return(0); }


double piramida::Volume(double a, double b, double h, int shet, double c)
{
	double p = (a + b + c) / 2;
	double SS = sqrt(p * (p - a) * (p - b) * (p - c));
	switch (shet)
	{
	case 3:  return((SS * h) / 3); break;
	case 4:  return((a * b * h) / 3); break;
	default: return(0);
	}
}

double piramida::Volume56(double a, double h, int shet)
{
	double b = a / (2 * tan((180 / shet) * PI / 180));
	this->set_b(b);
	double S = (shet*a * b) / 2;
	double V = (S * h)/3;
	return (V);
}

double piramida::All_Area(double a, double b, double d, int shet, double c)
{
	double p = (a + b + c) / 2;
	double NS = sqrt(p * (p - a) * (p - b) * (p - c));
	switch (shet)
	{
	case 3:  return(NS + ((a * d) / 2) + ((b * d) / 2) + ((c * d) / 2)); break;
	case 4:  return(a * b + d * a + d * b);; break;
	default: return(0);
	}
}

double piramida::All_Area56(double a, double c, double h, int shet)
{
	double b = a / (2 * tan((180 / shet) * PI / 180));
	this->set_b(b);
	double S = (shet*a * b) / 2;

	double S_poln = S + ((a * c / 2) * shet);
	
	return (S_poln);
}

string piramida::ALL_grani(string vershini[2][6], int shet)
{
	string N, F, G, H, M, D, DD, S, S2;
	N = vershini[1][0] + vershini[0][0] + vershini[1][1];
	F = vershini[1][1] + vershini[0][0] + vershini[1][2];
	G = vershini[1][2] + vershini[0][0] + vershini[1][3];
	H = vershini[1][3] + vershini[0][0] + vershini[1][0];
	D = vershini[1][3] + vershini[0][0] + vershini[1][4];
	DD = vershini[1][4] + vershini[0][0] + vershini[1][0];
	S = vershini[1][4] + vershini[0][0] + vershini[1][5];
	S2 = vershini[1][5] + vershini[0][0] + vershini[1][0];
	M = N + "," + F + "," + G + "," + H;
	// для четырех углов
	string M2, FF1;
	FF1 = vershini[1][2] + vershini[0][0] + vershini[1][0];
	M2 = N + "," + F + "," + FF1;
	string M3;
	M3 = N + "," + F + "," + G + "," + D + "," + DD;
	string M4;
	M4 = N + "," + F + "," + G + "," + D + "," + S + "," + S2;
	// для 3-х
	switch (shet)
	{
	case 3: return (M2); break;
	case 4: return(M); break;
	case 5: return(M3); break;
	case 6: return(M4); break;
	default: return(0);
	}
}

string piramida::ALL_vershini(string vershini[2][6], int shet)
{
	string al, al1, all5, all6;
	al = vershini[0][0] + "," + vershini[1][0] + "," + vershini[1][1] + "," + vershini[1][2] + "," + vershini[1][3];
	al1 = vershini[0][0] + "," + vershini[1][0] + "," + vershini[1][1] + "," + vershini[1][2];
	all5 = vershini[0][0] + "," + vershini[1][0] + "," + vershini[1][1] + "," + vershini[1][2] + "," + vershini[1][3] + "," + vershini[1][4];
	all6 = vershini[0][0] + "," + vershini[1][0] + "," + vershini[1][1] + "," + vershini[1][2] + "," + vershini[1][3] + "," + vershini[1][4] + "," + vershini[1][5];
	switch (shet)
	{
	case 3: return (al1); break;
	case 4: return (al); break;
	case 5: return (all5); break;
	case 6: return (all6); break;
	default: return(0);
	}

}
