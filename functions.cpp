#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Shape {
public:
	int l;
	Shape(int _l) {
		l = _l;
	};
};
class Circle : public Shape {
public:
	Circle(int r) : Shape(r) {};
	float get_s() { return 3.14*(l*l); };
	float get_p() { return 2 * (3.14*l); };
};

class Pryamoug : public Shape {
	int h;
public:
	Pryamoug(int l, int w) : Shape(l) { h = w; };
	int get_s() { return h*l; };
	int get_p() { return 2 * (h + l); };
};


class Treugolnik : public Shape {
	int k;
	int y;
public:
	Treugolnik(int l, int b, int c) : Shape(l) { y = b; k = c; };
	float get_p() { return (l + k + y); };
	float get_s() {
		float o = get_p() / 2;

		float r = (float)((o - l)*(o - k)*(o - y));

		return sqrt(r);
	};
};

void main()

{
	Pryamoug a(5, 12);
	cout << "S= " << a.get_s() << endl;
	cout << "P= " << a.get_p() << endl;
	Circle r(12);
	cout << "S1= " << r.get_s() << endl;
	cout << "P1= " << r.get_p() << endl;
	Treugolnik t(5, 5, 3);
	cout << "S2= " << t.get_s() << endl;
	cout << "P2: " << t.get_p() << endl;
	system("pause");
}
