#include<math.h>
#include<stdio.h>

double funcion(int x){
	double y;
	y = sin(10*x) + cos(3*x);
return y;
}

void cruces_cero(int i, int xu){
	double ant = 0, act;
	for(i = i; i<xu; i++){
		act = funcion(i);
		if((ant < 0 & act > 0) || (ant > 0 & act < 0))
			printf("Pasa por cero en: %d\n",i);
		act = ant;
	}
}

int main(){
	cruces_cero(0,100);
return 0;
}
