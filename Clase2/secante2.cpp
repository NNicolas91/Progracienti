//Marco V. Bayas Mayo, 2023.
//Programa para encontrar la raiz de una función
//Método: Secante.

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

double secantMethodF(double a, double b, double del){
 double dx, x, count;
 count = 0;

 dx = -(b-a)*fx(a)/(fx(b)-fx(a));
 while( dx> del ) {
  x=x+dx;
  if (fx(x)*fx(a)<0)
   {
    b=x;
   }
   else {
    a=x;
   }
   dx=-(b-a)*fx(a)/(fx(b)-fx(a));
  count++;
 }
 cout << "Número de iteraciones: " <<count<< endl;
 cout << "Raiz: "<<x<<endl;
 cout << "Error estimado: "<<dx<<endl;
 return 0;

}

double secantMethodG(double a, double b, double del){
 double dx, x, count;
 count = 0;

 dx = -(b-a)*gx(a)/(gx(b)-gx(a));
 while( dx> del ) {
  x=x+dx;
  if (gx(x)*gx(a)<0)
   {
    b=x;
   }
   else {
    a=x;
   }
   dx=-(b-a)*gx(a)/(gx(b)-gx(a));
  count++;
 }
 cout << "Número de iteraciones: " <<count<< endl;
 cout << "Raiz: "<<x<<endl;
 cout << "Error estimado: "<<dx<<endl;
 return 0;
}


int main()
{
 int count;
 double a,b,del,rootF,rootG;
 del=1e-6;
 
 cout << "Valores de a b" << endl;
 cin >> a >> b;

 rootF = secantMethodF(a, b, del);
 rootG = secantMethodG(a, b, del);
    
 return 0;
}
