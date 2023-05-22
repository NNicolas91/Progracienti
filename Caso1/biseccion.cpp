//Marco V. Bayas Marzo, 2023.
//Programa para encontrar la raiz de una función
//Método: Bisección.

#include <iostream>
#include <math.h>

using namespace std;

double fx (double x)
{
 double f;

 f=exp(x)*pow(x,2) - 2;
 return f;
}

int main()
{
 int count;
 double a,b,x,error,del, ite;
 del=1e-6;
 
 cout << "Valores de a b" << endl;
 cin >> a >> b;
 ite = 11;
 
 error=b-a;
 count=0;
 while( count <10) {
  x=(a+b)/2;
  if (fx(x)*fx(a)<0)
   {
    b= x;
   }
   else {
    a=x;
   }
  error=fx(x);
  count++;
  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;

 }

  return 0;
}
