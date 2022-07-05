#pragma once

using namespace std;

class cube
{
private:
	 
	double a; // äëčííŕ đĺáđŕ
public:
	cube();
	cube(double a);
	cube(const cube& Cube);

	string A = "A", B = "B", C = "C", D = "D", A1 = "A1", B1 = "B1", C1 = "C1", D1 = "D1";
	string versh = A + "," + B + "," + C + "," + D + "," + A1 + "," + B1 + "," + C1 + "," + D1;
	string grani = A + B + C + D + ", " + A1 + B1 + C1 + D1 + ", " + A + A1 + B1 + B + ", " + B + B1 + C1 + C + ", " + C + C1 + D1 + D + ", " + D + D1 + A1 + A;


	double get_a() const;


	double set_a(double new_a);


	double Volume(double a);

	double Surface_area(double a);

	string Grani(string grani);

	string Vershin(string versh);
};
