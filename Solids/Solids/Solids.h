#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solid
{
public:
	Solid(string _solidType);
	virtual ~Solid();
	virtual double getVolume() = 0;
	virtual double getSurfaceArea()	 = 0;
	string getType();
protected:
	string solidType;
};

class Cuboid : public Solid
{
public:
	Cuboid(double w, double l, double h);
	double getVolume() override;
	double getSurfaceArea() override;

private:
	double width;
	double length;
	double height;
};

class Cylinder : public Solid
{
public:
	Cylinder(double h, double r);
	double getVolume() override;
	double getSurfaceArea() override;

private:
	double height;
	double radius;
	const double PI = 3.14159265359;
};

class Sphere : public Solid
{
public:
	Sphere(double r);
	double getVolume() override;
	double getSurfaceArea() override;

private:
	double radius;
	const double PI = 3.14159265359;
};