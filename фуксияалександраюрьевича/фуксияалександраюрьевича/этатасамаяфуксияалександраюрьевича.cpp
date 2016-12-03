#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class shape
{
public:
	float l;
	shape (float _l)
	{
		l=_l;
	}
	shape();
	float gets();
	float getp();
};
class circle: 
	public shape{
public:
	circle (int r): shape(r){}
	  float gets()
{
 return 3.14*(l*l);
}
float getp()
{
	return 2*3.14*l;
}
};

void main()
{
circle y(12);
cout<<"Sum="<<y.gets();
cout<<"Per="<<y.getp();
system("pause");
}