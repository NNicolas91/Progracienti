#include <iostream>
#include <math.h>

using namespace std;

double fx (double x) //Evaluación de la raíz que se busca (double fx)
{
 double f;
 double vyo, vxo, vy, m, b, g, tau;  //Definición de constantes iniciales
 vyo=10;
 vxo=10;
 m=1;
 g=9.81;
 tau=10;
 b=m/tau;
 vy=m*g/b;

 f=((vyo+vy)/(vxo))*x+vy*tau*log(1-(x/(vxo*tau)));
 return f;
}


int main()
{
 int count;
 double a,b,x,xm,dx,f,fm,del,aux;
 del=1e-6; //Desde la línea 31 hasta la 60 es la parte del código que implementa la búsqueda de la raíz
 
 cout << "Valores de a b" << endl;
 cin >> a >> b;
 cout << "-----------------------------------------"<< endl;
 
 fm=fx(a);
 f=fx(b);
 if (abs(fm)>abs(f)) 
  {
   xm=a;
   x=b;
   }
   else {
    xm=b;
    x=a;
    aux=f;
    f=fm;
    fm=aux;
   }
 dx=(xm-x)*f/(f-fm);
 count=0;
 while( abs(dx) > del ) {
  xm=x;
    //cout<<" "<<endl;
  //cout <<count+1<< " Valores de xr: " <<x<< endl; Descomentar si quiero todas las iteraciones
  fm=f;
  x=x+dx;
  f=fx(x);
  dx=(xm-x)*f/(f-fm);
  count++;
 }
 
  cout << "-----------------------------------------"<< endl;
  cout << "Número de iteraciones: " <<count<< endl;
  cout << "Raiz: "<<x<<endl;
  cout << "Error estimado: "<<abs(dx)<<endl;
  return 0;
}

