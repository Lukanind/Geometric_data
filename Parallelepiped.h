#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class parallelepiped
{
private:
	double a, b, c, h;
	double DAB, A1AB, A1AD; //corner
	string vershini[4][4]{
		{"A1","B1","C1","D1"},
		{"A","B","C","D"}
	};
public:
	string A = "A", B = "B", C = "C", D = "D", A1 = "A1", B1 = "B1", C1 = "C1", D1 = "D1";
	string versh = A + "," + B + "," + C + "," + D + "," + A1 + "," + B1 + "," + C1 + "," + D1;
	string grani = A + B + C + D + ", " + A1 + B1 + C1 + D1 + ", " + A + A1 + B1 + B + ", " + B + B1 + C1 + C + ", " + C + C1 + D1 + D + ", " + D + D1 + A1 + A;

	parallelepiped();
	parallelepiped(double a, double b, double c, double h, double DAB, double A1AB, double A1AD);
	parallelepiped(const parallelepiped& parallelepiped);

	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_h() const;
	double get_DAB() const;
	double get_A1AB() const;
	double get_A1AD() const;

	double set_a(double new_a);
	double set_b(double new_b);
	double set_c(double new_c);
	double set_h(double new_h);
	double set_DAB(double new_DAB);
	double set_A1AB(double new_A1AB);
	double set_A1AD(double new_A1AD);

	double Surface_grani(double a, double b, double corner);
	double Volume(double a, double b, double h);
	double Volume(double a, double b, double h, double corner);
	
	double Surface_area(double a, double b, double c);
	double Surface_area(double a, double b, double c, double DAB, double A1AB, double A1AD);

	string Grani(string grani);

	string Vershin(string versh);

};
