#include <stdio.h>

//-------------------------------------------------//

double area(double r){
	return (3.14159 * (r*r));
}

//-------------------------------------------------//

int main (){
	double r,a;
	
	scanf ("%lf", &r);
	a = area(r);
	
	printf ("A=%.4lf\n",a);	
	
	return 0;
}

