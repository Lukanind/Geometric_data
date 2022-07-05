#include "Cube.h"

using namespace std;

cube::cube() : a(0){}
cube::cube(double a) : a(a) {}
cube::cube(const cube& cube) : a(cube.a) {}


double cube::get_a()const { return a; };


double cube::set_a(double new_a) { return a = new_a; };


double cube::Volume(double a)
{
	return(a * a * a);
}

double cube::Surface_area(double a) 
{
	return(6 * (a * a));
}

string cube::Grani(string grani)
{
	return(grani);
}

string cube::Vershin(string versh)
{
	return(versh);
}
