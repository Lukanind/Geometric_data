#include "prizma.h"

using namespace std;

prizma::prizma() : a(0), b(0), c(0), d(0), h(0), h2(0), S(0), So(0), Sb(0) {}
prizma::prizma(const prizma& prizma) : a(prizma.a), b(prizma.b), c(prizma.c), d(prizma.d), h(prizma.h), h2(prizma.h2), S(prizma.S), So(prizma.So), Sb(prizma.Sb) {}
prizma::prizma(double a, double b, double c, double d, double h, double  h2, double S, double So, double Sb) : a(a), b(b), c(c), d(d), h(h), h2(h2), S(S), So(So), Sb(Sb) {}
double prizma::get_a()const { return a; }
double prizma::get_b()const { return b; }
double prizma::get_c()const { return c; }
double prizma::get_d()const { return d; }
double prizma::get_h()const { return h; }
double prizma::get_h2()const { return h2; }
double prizma::get_S()const { return S; }
double prizma::get_So()const { return So; }
double prizma::get_Sb()const { return Sb; }

double prizma::set_a(double new_a) { a = new_a; }
double prizma::set_b(double new_b) { b = new_b; }
double prizma::set_c(double new_c) { c = new_c; }
double prizma::set_d(double new_d) { d = new_d; }
double prizma::set_h(double new_h) { h = new_h; }
double prizma::set_h2(double new_h2) { h2 = new_h2; }
double prizma::set_S(double new_S) { S = new_S; }
double prizma::set_So(double new_So) { So = new_So; }
double prizma::set_Sb(double new_Sb) { Sb = new_Sb; }




double prizma::Volume_triangle(double a, double b, double c, double h)
{
	double p = ((a + b + c) / 2);
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return(S * h);
}
double prizma::Volume_trapezoid(double a, double b, double h, double h2)
{
	double S = (((a * b) / 2) * h);
	return (S * h2);
}
double prizma::Volume_pentagon(double a, double h)

{
	double S = (((a * a) / 4) * sqrt(5 * (5 + 2 * sqrt(5))));
	return(S*h);
}
double prizma::Volume_hexagon(double a, double h)
{
	return((3 *sqrt(3)*a*a*h)/2);
}

double prizma::Surface_area(double a, double b, double c, double h)
{
	double p = ((a + b + c) / 2);
	double Sb = ((a + b + c) * h);
	double So = sqrt(p * (p - a) * (p - b) * (p - c));
	return(2 * So + Sb);
}

double prizma::Surface_area(double a, double b, double c, double d, double h, double  h2)
{
	double Sb = ((a + b + c + d) * h2);
	double So = (((a * b) / 2) * h);
	return(2 * So + Sb);
}


double prizma::Surface_area(double a ,double h)
{
	double Sb = ((a*5) * h);
	double So =(((a * a) / 4) * sqrt(5 * (5 + 2 * sqrt(5))));;
	return(2 * So + Sb);
}


double prizma::Surface_area_Hexagon(double a, double h2)
{
	double Sb = ((a * 6) * h2);
	double So = ((3 * sqrt(3) * a * a ) / 2);
	return(2 * So + Sb);
}
void prizma::show_triangle_vertexes()
{
	cout << "A, B, C, A1, B1, C1";
}
void prizma::show_triangle_facets()
{
	cout << "AA1BB1;AA1СС1;BCB1C1;ABC;A1B1C1.";

}

void prizma::show_trapezoid_vertexes()
{
	cout << "A,B,C,D,A1,B1,C1,D1";
}

void prizma::show_trapezoid_facets()
{
	cout << "ABCD;A1B1C1D1;AA1BB1;BB1CC1;CC1DD1;DD1AA1.";
}

void prizma::show_pentagon_vertexes()
{
	cout << "A, B, C, D, E, A1, B1, C1,D1,E1";
}

void prizma::show_pentagon_facets()
{
	cout << "ABCDE;A1B1C1D1E1;AA1BB1;BB1CC1;CC1DD1;DD1EE1;EE1AA1.";
}
void prizma::show_hexagon_vertexes()
{
	cout << "A, B, C, D, E, F, A1, B1, C1, D1, E1, F1";
}

void prizma::show_hexagon_facets()
{
	cout << "ABCDEF;A1B1C1D1E1F1;AA1BB1;BB1CC1;CC1DD1;DD1EE1;EE1FF1,FF1AA1.";
}
