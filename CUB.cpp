#include "CUB.h"

using namespace std;

CUB::CUB() : a(0){}
CUB::CUB(double a) : a(a) {}
CUB::CUB(const CUB& CUB) : a(CUB.a) {}


double CUB::get_a()const { return a; };

double CUB::get_A()const { return A; }
double CUB::get_B()const { return B; }
double CUB::get_C()const { return C; }
double CUB::get_D()const { return D; }
double CUB::get_E()const { return E; }
double CUB::get_F()const { return F; }
double CUB::get_G()const { return G; }

double CUB::set_a(double new_a) { return a = new_a; };

double CUB::set_A(double new_A) { return A = new_A; }
double CUB::set_B(double new_B) { return B = new_B; }
double CUB::set_C(double new_C) { return C = new_C; }
double CUB::set_D(double new_D) { return D = new_D; }
double CUB::set_E(double new_E) { return E = new_E; }
double CUB::set_F(double new_F) { return F = new_F; }
double CUB::set_G(double new_G) { return G = new_G; }

double CUB::Volume_CUB(double a)
{
	return(a * a * a);
}

double CUB::Surface_area_CUB(double a) 
{
	return(6 * (a * a));
}
