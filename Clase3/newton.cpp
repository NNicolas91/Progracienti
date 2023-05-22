//Marco V. Bayas Mayo-2023.
//Programa para encontrar la raiz de una función
//Método: Newton-Raphson.

#include <iostream>
#include <math.h>

using namespace std;


double fx (double x);
double dfx (double x);
double df (double x);

int main()
{
 int count;
 double a,x,dx,del;
 del=1e-6;
 
 cout << "Estimación inicial: " << endl;
 cin >> a;
 
 count=0;
 dx=1;
 while( abs(dx) > del ) {
  dx=-fx(a)/df(a);
  x=a+dx;
  a=x;
  count++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<abs(dx)<<endl;
  return 0;
}

double fx (double x)
{
 double f, a, e0, v0, pi, q;
 
 q=1.602e-19;
 v0=1.09e3 * q ;
 e0= 8.854187817e-12;
 a= -(pow(q,2)/(4*M_PI*e0*v0));
 
 f= a/x * exp(-x);
 return f;
}

double dfx (double x)
{
 double f;

 f=exp(x)*log(x)+exp(x)/x-2*x;
 return f;
}

double df (double x)
{
 double f,h;

 h=1e-1;
 f=(fx(x+h)-fx(x))/h;
 return f;

}
