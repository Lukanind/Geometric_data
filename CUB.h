#pragma once

using namespace std;

class CUB
{
private:
	double A, B, C, D, E, F, G; // Âĺđřčíű
	double a; // äëčííŕ đĺáđŕ
public:
	CUB();
	CUB(double a, double V, double S_TTOBERXHOCT);
	CUB(const CUB& CUB);

	double get_a() const;

	double get_A() const;
	double get_B() const;
	double get_C() const;
	double get_D() const;
	double get_E() const;
	double get_F() const;
	double get_G() const;

	double set_a(double new_a);

	double set_A(double  new_A);
	double set_B(double  new_B);
	double set_C(double  new_C);
	double set_D(double  new_D);
	double set_E(double  new_E);
	double set_F(double  new_F);
	double set_G(double  new_G);

	double Volume_CUB(double a);

	double Surface_area_CUB(double a);

};
