// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main();

void fourSideMenu();

void threeSideMenu();

void circ();

void rect()
{
	cout << "Please enter the height: " ;
	double height(1.0);
	cin >> height;
	cout << "Please enter the width: " ;
	double width(1.0);
	cin >> width;

	double area = height * width;
	cout << "The total area of the rectangle is " << area << endl;
	cout << " " << endl;
};

void square1()
{
	cout << "Please one length of the sides: " ;
	double side(1.0);
	cin >> side;

	double area = side * side;
	cout << "The total area of the square is " << area << endl;
	cout << " " << endl;
};

void trapezium1()
{
	cout << "Please enter the height: " ;
	double height(1.0);
	cin >> height;
	cout << "Please bottom base length: " ;
	double b1(1.0);
	cin >> b1;
	cout << "Please top base length: " ;
	double b2(1.0);
	cin >> b2;

	double area = 0.5 * height * (b1 + b2);
	cout << "The total area of the rectangle is " << area << endl;
	cout << " " << endl;
};

void rhombus1()
{
	cout << "Please enter the distance from one corner to the opposite corner: " ;
	double d1(1.0);
	cin >> d1;
	cout << "Please enter the distance the other one corner to its opposite corner: " ;
	double d2(1.0);
	cin >> d2;

	double area = 0.5 * d1 * d2;
	cout << "The total area of the rhombus is " << area << endl;
	cout << " " << endl;
};

void fourSideMenu()
{
	cout << " " << endl;
	cout << "Choose the shape" << endl;
	cout << "1. Rectangle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Trapezium" << endl;
	cout << "4. Rhombus" << endl;
	cout << "5. Return to main menu" << endl;
	enum menuoptions
		{
			rectangle = 1,
			square = 2,
			trapezium = 3,
			rhombus = 4,
			back = 5
		};
	int choice = 0;
	cin >> choice;

	if (choice == rectangle)
	{
		rect();
		fourSideMenu();
	}

	if (choice == square)
	{
		square1();
		fourSideMenu();
	}

	if (choice == trapezium)
	{
		trapezium1();
		fourSideMenu();
	}

	if (choice == rhombus)
	{
		rhombus1();
		fourSideMenu();
	}

	if (choice == back)
		main();

	else
		main();
}

void equilateraltri()
{
	cout << "Please enter the length of one side: " ;
	double side(1.0);
	cin >> side;


	double area = ((side * side) * sqrt(3)) / 4;
	cout << "The total area of the triangle is " << area << endl;
	cout << " " << endl;
};

void triangle()
{
	cout << "Please enter the height: " ;
	double height(1.0);
	cin >> height;
	cout << "Please enter the base length: " ;
	double width(1.0);
	cin >> width;

	double area = 0.5 * height * width;
	cout << "The total area of the triangle is " << area << endl;
	cout << " " << endl;
};

void threeSideMenu()
{
	cout << " " << endl;
	cout << "Choose the shape" << endl;
	cout << "1. Triangle" << endl;
	cout << "2. Equilateral Triangle" << endl;
	cout << "3. Return to main menu" << endl;
	enum menuoptions
		{
			tri=1,
			eqtri=2,
			back=3
		};
	int choice = 1;
	cin >> choice;

	if (choice == tri)
	{
		triangle();
		threeSideMenu();
	}
	if (choice == eqtri)
	{
		equilateraltri();
		threeSideMenu();
	}
	if (choice == back)
		main();
}

void sector()
{
	constexpr long double pi = 3.14159265358979323846264338327950288419716939937510;
	cout << "Please enter the radius: " ;
	double radius(1.0);
	cin >> radius;
	cout << "Please enter the degree of the central angle: " ;
	double degree(1.0);
	cin >> degree;

	double area = (degree / 360) * pi * (radius * radius);
	cout << "The total area of the sector is " << area << endl;
	cout << " " << endl;
};

void fullCircle()
{
	constexpr long double pi = 3.14159265358979323846264338327950288419716939937510;
	cout << "Please enter the radius: " ;
	double radius(1.0);
	cin >> radius;

	double area = pi * (radius * radius);
	cout << "The total area of the circle is " << area << endl;
	cout << " " << endl;
};

void semiCircle()
{
	constexpr long double pi = 3.14159265358979323846264338327950288419716939937510;
	cout << "Please enter the radius: " ;
	double radius(1.0);
	cin >> radius;


	double area = 0.5 * pi * (radius * radius);
	cout << "The total area of the semi circle is " << area << endl;
	cout << " " << endl;
};

void quarCircle()
{
	constexpr long double pi = 3.14159265358979323846264338327950288419716939937510;
	cout << "Please enter the radius: " ;
	double radius(1.0);
	cin >> radius;


	double area = 0.25 * pi * (radius * radius);
	cout << "The total area of the quarter circle is " << area << endl;
	cout << " " << endl;
};

void circ()
{
	cout << " " << endl;
	cout << "Choose the shape" << endl;
	cout << "1. Full circle" << endl;
	cout << "2. Semi circle" << endl;
	cout << "3. Quarter circle" << endl;
	cout << "4. Sector" << endl;
	cout << "5. Back" << endl;
	enum menuoptions
		{
			full = 1,
			sfull = 2,
			qfull = 3,
			sect = 4,
			back = 5
		};
	int choice = 1;
	cin >> choice;

	if (choice == full)
	{
		fullCircle();
		circ();
	}
	if (choice == sfull)
	{
		semiCircle();
		circ();
	}
	if (choice == qfull)
	{
		quarCircle();
		circ();
	}
	if (choice == sect)
	{
		sector();
		circ();
	}
	if (choice == back)
	{
		main();
	}
}

int main()
{
	//	display menu lvl1
	cout << "WELCOME" << endl;
	cout << "Choose from one of the shape below." << endl;
	cout << "1. 4 Sides Shape" << endl;
	cout << "2. 3 Sides Shape" << endl;
	cout << "3. Circle" << endl;
	cout << "4. Quit" << endl;
	cout << " " << endl;
	enum lvl1Menu
		{
			fourSideShape = 1,
			threeSideShape = 2,
			circle = 3,
			quit = 4
		};
	try
	{
		// user input choice
		int choice = 0;
		cin >> choice;
		if (choice == fourSideShape)
			fourSideMenu();
		if (choice == threeSideShape)
			threeSideMenu();
		if (choice == circle)
			circ();
		if (choice == quit)
			return 0;
		if (choice != quit && choice != fourSideShape && choice != threeSideShape && choice != circle)
		{
			cout << "That is not a valid choice" << endl;
			cout << "Paused, press any key to exit." << endl;
			cin.get();
			return 0;
		}
	}
	catch (...)
	{
		cerr << "ERROR!!" << endl;

		return 2;
	}
	cout << "Paused, press any key to exit." << endl;
	cin.get();
	return 0;
}
