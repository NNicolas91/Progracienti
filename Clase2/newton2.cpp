//Marco V. Bayas Mayo-2023.
//Programa para encontrar la raiz de una función
//Método: Newton-Raphson.

#include <iostream>
#include <math.h>

using namespace std;

double fx (double x)
{
 double f;

 f=exp(x)*log(x)-x*x;
 return f;
}

double gx(double x){
 return (x-5)*exp(x) + 5;
}

double dgx(double x){
 return exp(x) + x*exp(x)-5*exp(x);
}
double dfx (double x)
{
 double f;

 f=exp(x)*log(x)+exp(x)/x-2*x;
 return f;
}

double newtonMethodF(double a, double del){
 double dx, x, count;
  
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

double newtonMethodG(double a, double del){
 double dx, x, count;
  
 count=0;
 dx=1;
 while( abs(dx) > del ) {
  dx=-gx(a)/dgx(a);
  x=a+dx;
  a=x;
  count++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<abs(dx)<<endl;
  return 0;
}

int main()
{
 int count;
 double a, del, rootF, rootG;
 del=1e-6;
 
 cout << "Estimación inicial: " << endl;
 cin >> a;

 rootF = newtonMethodF(a, del);
 rootG = newtonMethodG(a, del);
    
 return 0; 
}
