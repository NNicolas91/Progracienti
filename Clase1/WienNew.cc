#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return (x-5)*exp(x) + 5;
}

//double fi(double x){
//	h=6.63*pow(10,-64);
//	c=3*pow(10,8);
//	k=1.37*pow(10,-23);
//	T=273;
//	return (h*c)/(k*T) 1/x;
//}

double df(double x) {
    return exp(x) + x*exp(x)-5*exp(x);
}

double newtonRaphson(double x0, double tolerance, int maxIterations) {
    double x = x0;
    int iterations = 0;

    while (fabs(f(x)) > tolerance && iterations < maxIterations) {
        x = x - f(x) / df(x);
        iterations++;
    }

    if (fabs(f(x)) <= tolerance) {
        return x;
    } else {
        // Indica que no se encontró una raíz dentro de las iteraciones máximas
        return NAN;
    }
}

int main() {
    double x0 = 4.5;  // Valor inicial
    double tolerance = 0.0001;  // Tolerancia para la convergencia
    int maxIterations = 100;  // Número máximo de iteraciones

    double root = newtonRaphson(x0, tolerance, maxIterations);

    if (!isnan(root)) {
      cout << "La raíz aproximada es: " << root << endl;
    } else {
       cout << "No se encontró una raíz dentro de las iteraciones máximas." << endl;
    }

    return 0;
}

