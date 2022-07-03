#pragma once 
#include <iostream>
#include <math.h>

using namespace std;

class prizma
{
private:
	double a , b, c, d, h,h2,S,So,Sb;
	
	
public:
	prizma();
	prizma(const prizma& prizma);
	prizma( double a, double b, double c, double d, double h, double h2, double S, double So, double Sb);



	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_d() const;
	double get_h() const;
	double get_h2() const;
	double get_S() const;
	double get_So() const;
	double get_Sb() const;
	

	double set_a(double new_a);
	double set_b(double new_b);
	double set_c(double new_c);
	double set_d(double new_d);
	double set_h(double new_h);
	double set_h2(double new_h2);
	double set_S(double  new_S);
	double set_So(double  new_So);
	double set_Sb(double  new_Sb);
	



        double Volume_triangle(double a, double b, double c, double h);//triangle

	double Volume_trapezoid(double a, double b, double h, double h2);//trapezoid
	
	double Volume_pentagon(double a, double h);//pentagon
	
	double Volume_hexagon(double a, double h);//Hexagon


	double Surface_area(double a, double b, double c, double h);//triangle

	double Surface_area(double a, double b, double c, double d, double h, double h2);//trapezoid
	double Surface_area(double a, double h);//pentagon
	double Surface_area_Hexagon(double a, double h2);//hexagon

	void show_triangle_vertexes();
	void show_triangle_facets();
	void show_trapezoid_vertexes();
	void show_trapezoid_facets();

};


