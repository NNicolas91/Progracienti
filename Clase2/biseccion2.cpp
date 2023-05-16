//Marco V. Bayas Marzo, 2023.
//Programa para encontrar la raiz de una función
//Método: Bisección.

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

double biseccionMethodF(double a, double b, double del){
 int count;
 double x,error;
error=b-a;
 count=0;
 while( error > del ) {
  x=(a+b)/2;
  if (fx(x)*fx(a)<0)
   {
    b= x;
   }
   else {
    a=x;
   }
  error=b-a;
  count++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<error<<endl;
  return 0;
}  

double biseccionMethodG(double a, double b, double del){
 int count;
 double x,error;
error=b-a;
 count=0;
 while( error > del ) {
  x=(a+b)/2;
  if (gx(x)*gx(a)<0)
   {
    b= x;
   }
   else {
    a=x;
   }
  error=b-a;
  count++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<error<<endl;
  return 0;
}  

int main()
{
 int count;
 double a,b,rootF,rootG,del;
 del=1e-6;
 
 cout << "Valores de a b" << endl;
 cin >> a >> b;

 rootF = biseccionMethodF(a, b, del);
 rootG = biseccionMethodG(a, b, del);
 
 return 0;
}
