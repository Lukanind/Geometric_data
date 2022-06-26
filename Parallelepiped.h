#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class parallelepiped
{
private:
	double a, b, c, h;
	double V, S_poln;
public:
	parallelepiped();
	parallelepiped(double a, double b, double c, double h);
	parallelepiped(const parallelepiped& parallelepiped);

	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_h() const;
	double get_V() const;
	double get_S_poln() const;

	double set_a(double new_a);
	double set_b(double new_b);
	double set_c(double new_c);
	double set_h(double new_h);
	double set_V(double new_V);
	double set_S_poln(double new_S_poln);


	double Volume(double a, double b, double h);

	double Surface_area(double a, double b, double c);

};
