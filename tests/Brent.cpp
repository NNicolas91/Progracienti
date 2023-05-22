#include <iostream>
#include <math.h>

using namespace std;

double fx (double x)
{
 double f;
 
 f=exp(x)*log(x) - pow(x,2);
 return f; 
}

double R (double b, double c)
{
 double f;

 f = fx(b)/fx(c);
 return f; 
}

double S (double a, double b)
{
 double f;

 f=fx(b)/fx(a);
 return f;
}

double T (double a, double c)
{
 double f;
 
 f=fx(a)/fx(c);
 return f;	
}

int main()
{
 int count;
 double a, b, c, P, Q, del, error, x, ite;
 del=1e-6;

 cout << " Valores de a, b y c" << endl;
 cin >> a >> b;
 
 c = a;
 error=b-a;
 count = 0;
 ite = 100;
 
 while( abs(error) > del || fx(b)==0 ) {

  P = S(a, b)*(T(a, c)*(R(b, c)-T(a, c))*(c-b) - (1 - R(b, c))*(b - a));
  Q = (T(a, c) - 1)*(R(b, c) - 1)*(S(a, b) - 1);
  x = b + P/Q;
  c = b;
  if(fx(x)*fx(a)<0)
   {
    b=x; 
   }
   else {
    a=x;
   }
  error=b-a;
  count ++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<error<<endl;
 return 0;
}
