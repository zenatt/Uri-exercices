#include <stdio.h>

//-------------------------------------------------//

int sum (int a, int b){
	return (a+b);
}

//-------------------------------------------------//

int main (){
	int soma,a,b;
	
	scanf ("%d%d", &a, &b);
	soma = sum(a,b);
	
	printf ("SOMA = %d\n",soma);	
	
	return 0;
}

