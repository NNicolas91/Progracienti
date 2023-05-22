//Marco V. Bayas May-2023
//Sistema de dos ecuaciones no lineales
//Método: Newton-Raphson con evaluación numérica de la derivada.

#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

double fxy (double x, double y);
double gxy (double x, double y);
double dfx (double x, double y);
double dfy (double x, double y);
double dgx (double x, double y);
double dgy (double x, double y);

int main()
{


 ofstream archivo;
 archivo.open("datos.dat", fstream::out);


 
 int count;
 double x,dx,y,dy,del;
 del=1e-6;
 
 
 cout << "Valor de x0" << endl;
 cin >> x;
 cout << "Valor de y0" << endl;
 cin >> y;

 count=0;
 
 do {
  dx=(fxy(x,y)*dgy(x,y)-gxy(x,y)*dfy(x,y))/(dfx(x,y)*dgy(x,y)-dgx(x,y)*dfy(x,y));
  dy=(gxy(x,y)*dfx(x,y)-fxy(x,y)*dgx(x,y))/(dfx(x,y)*dgy(x,y)-dgx(x,y)*dfy(x,y)); 
  x=x-dx;
  y=y-dy;
  count++;
  archivo << x << " " << y << "\n";
 } while( abs(dx)+abs(dy) > del );

 cout << "Número de iteraciones: " <<count<< endl;
 cout << "Raiz: "<<x<<","<<y<<endl;
 cout << "Error estimado para x: "<<abs(dx)<<endl;
 cout << "Error estimado para y: "<<abs(dy)<<endl;
 cout << "Evaluación g" << fxy(x,y)<< endl;
 cout <<  "Evaluación f" << gxy(x,y)<< endl;

 return 0;
}

double fxy (double x, double y)
{
 double f;
 f=exp(x)-3*y-1;
 return f;
}

double gxy (double x, double y)
{
 double f;
 
 f=x*x+y*y-4;
 return f;
}

double dfx (double x, double y)
{
 double f,h;
 
 h=1e-6; 
 f=(fxy(x+h,y)-fxy(x,y))/h;
 return f;
}

double dfy (double x, double y)
{
 double f,h;
 
 h=1e-6;
 f=(fxy(x,y+h)-fxy(x,y))/h;
 return f;
}

double dgx (double x, double y)
{
 double f,h;
 
 h=1e-6; 
 f=(gxy(x+h,y)-gxy(x,y))/h;
 return f;
}

double dgy (double x, double y)
{
 double f,h;
      
 h=1e-6;
 f=(gxy(x,y+h)-gxy(x,y))/h;
 return f;
}
