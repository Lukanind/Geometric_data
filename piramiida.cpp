#include "pirammida.h"

using namespace std;

piramida::piramida() : a(0), b(0), c(0), d(0), Obiom(0), S_poln(0) {}
piramida::piramida(const piramida& piramida) : a(piramida.a), b(piramida.b), c(piramida.c), d(piramida.d), Obiom(piramida.Obiom), S_poln(piramida.S_poln), dl_gr(piramida.dl_gr),dl_vershin(piramida.dl_vershin) {}
piramida::piramida(double a, double b, double c, double d, string vershini[2][4]) : a(a), b(b), c(c), d(d), Obiom(Volume(a, b, c)), S_poln(All_Area(a, b, d)),dl_gr(ALL_grani(vershini)),dl_vershin(ALL_vershini(vershini)) {}


double piramida::get_a()const { return a; }
double piramida::get_b()const { return b; }
double piramida::get_c()const { return c; }
double piramida::get_d()const { return d; }
double piramida::get_Obiom()const { return Obiom; }
double piramida::get_S_poln()const { return S_poln; }
string piramida::get_dl_gr()const { return dl_gr; }
string piramida::get_dl_vershin()const { return dl_vershin; }

double  piramida::set_a(double new_a) { a = new_a; return(0); }
double  piramida::set_b(double new_b) { b = new_b; return(0); }
double  piramida::set_c(double new_c) { c = new_c; return(0); }
double  piramida::set_d(double new_d) { d = new_d; return(0); }
double  piramida::set_Obiom(double new_Obiom) { Obiom = new_Obiom; return(0); }
double  piramida::set_S_poln(double new_S_poln) { S_poln = new_S_poln; return(0); }
string  piramida::set_dl_gr(string new_dl_gr) { dl_gr = new_dl_gr; return(0); }
string  piramida::set_dl_vershin(string new_dl_vershin) { dl_vershin = new_dl_vershin; return(0); }

double piramida::Volume(double a, double b, double c)
{
	return((a * b * c) / 3);
}

double piramida::All_Area(double a, double b, double d)
{
	return(a * b + d * a + d * b);
}

string piramida::ALL_grani(string vershini[2][4])
{
	string N, F, G, H,M;
	N = vershini[1][0] + vershini[0][0] + vershini[1][1];
	F = vershini[1][1] + vershini[0][0] + vershini[1][2];
	G = vershini[1][2] + vershini[0][0] + vershini[1][3];
	H = vershini[1][3] + vershini[0][0] + vershini[1][0];
	M = N + "," + F + "," + G + "," + H;
	return(M);
}

string piramida::ALL_vershini(string vershini[2][4])
{
	string al;
	al = vershini[0][0] + "," + vershini[1][0] + "," + vershini[1][1] + "," + vershini[1][2] + "," + vershini[1][3];
	return (al);
}