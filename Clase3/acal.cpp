#include<iostream>
#include<math.h>

using namespace std;

double fx (double x)
{
 double f, a, e0, v0, pi, q;
 
 q=1.602e-19;
 v0=1.09e3 * q ;
 e0= 8.854187817e-12;
 a= -(pow(q,2)/(4*M_PI*e0*v0));
 
 f= a/x * exp(-x);
 return a;
}

int main()
{
 double a;

 a = fx(2);
 cout << a<<endl;
return 0; 
}
