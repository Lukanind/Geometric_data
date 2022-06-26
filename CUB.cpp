#include "CUB.h"

using namespace std;

CUB::CUB() : a(0), V(0), S_TTOBERXHOCT(0){}
CUB::CUB(double a, double V, double S_TTOBERXHOCT) : a(a),V(Volume_CUB(a)), S_TTOBERXHOCT(Surface_area_CUB(a)) {}
CUB::CUB(const CUB& CUB) : a(CUB.a),V(CUB.V), S_TTOBERXHOCT(CUB.S_TTOBERXHOCT) {}


double CUB::get_a()const { return a; };
double CUB::get_V()const { return V; };
double CUB::get_S_TTOBERXHOCT()const { return S_TTOBERXHOCT; };

double CUB::get_A()const { return A; }
double CUB::get_B()const { return B; }
double CUB::get_C()const { return C; }
double CUB::get_D()const { return D; }
double CUB::get_E()const { return E; }
double CUB::get_F()const { return F; }
double CUB::get_G()const { return G; }

double CUB::set_a(double new_a) { a = new_a; };
double CUB::set_V(double new_V) { V = new_V; };
double CUB::set_S_TTOBERXHOCT(double new_S_TTOBERXHOCT) { S_TTOBERXHOCT = new_S_TTOBERXHOCT; };

double CUB::set_A(double new_A) { A = new_A; }
double CUB::set_B(double new_B) { B = new_B; }
double CUB::set_C(double new_C) { C = new_C; }
double CUB::set_D(double new_D) { D = new_D; }
double CUB::set_E(double new_E) { E = new_E; }
double CUB::set_F(double new_F) { F = new_F; }
double CUB::set_G(double new_G) { G = new_G; }

double CUB::Volume_CUB(double a)
{
	return(a * a * a);
}

double CUB::Surface_area_CUB(double a) 
{
	return(6 * (a * a));
}