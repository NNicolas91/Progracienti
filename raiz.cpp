#include<iostream>
#include<math.h>

using namespace std;

double fx (double x)
{
double f;
f=(1+9.8)*x+98*log(1-x/10);
return f;
}

int main(){
 
 int count;
 double a,b,x,error,del;
 del=1e-6;
 cout << "Ingrese valores de a y b" <<endl;
 cin >> a >> b;
 error=b-a;
 count=0;

 while( error > del ) {
 x=(a+b)/2;
 if (fx(a)*fx(x)<0)
 {
 b= x;
 error=b-a;
 }
 else {
 a=x;
 error=b-a;
 }
 count++;
 }

  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<error<<endl;
  return 0;
}
