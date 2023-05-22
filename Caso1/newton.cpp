//Marco V. Bayas Mayo-2023.
//Programa para encontrar la raiz de una función
//Método: Newton-Raphson.

#include <iostream>
#include <math.h>

using namespace std;

double fx (double x)
{
 double f;

 f=pow(x,2)*exp(x) - 3;
 return f;
}

double dfx (double x)
{
 double f;

 f=2*x*exp(x) + pow(x,2)*exp(x);
 return f;
}

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
  dx=-fx(a)/dfx(a);
  x=a+dx;
  a=x;
  count++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<abs(dx)<<endl;
  return 0;
}
