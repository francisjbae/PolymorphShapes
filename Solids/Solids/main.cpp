#include "Solids.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	Solid* cube1 = new Cuboid(2, 2, 2);
	Solid* cube2 = new Cuboid(3, 4, 5);
	Solid* cylinder1 = new Cylinder(3, 2);
	Solid* sphere1 = new Sphere(4);

	vector<Solid*> solidVec{ cube1, cube2, cylinder1, sphere1 };

	for (const auto& solid : solidVec)
	{
		cout << fixed << setprecision(4);
		cout << "Solid type: " << solid->getType() << endl;
		cout << "Volume: " << solid->getVolume() << endl;
		cout << "Surface Area: " << solid->getSurfaceArea() << endl;
		cout << endl;
	}

};