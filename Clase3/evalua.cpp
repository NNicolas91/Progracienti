#include<iostream>
#include<math.h>

using namespace std;


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

int main(){

double x,a,b,y;

a=fxy(-1.97926,-0.287276);
b=gxy(-1.97926,-0.287276);
cout << a<< endl;
cout << b<< endl;
return 0;
}

