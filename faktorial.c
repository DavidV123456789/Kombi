#include "kombinacne.h"

int getFaktorial (int n){
	
	int faktorial;
	int i;
	
	i=n;
	faktorial= n;
	
	while(i =! 0){
		i= i-1;
		faktorial = faktorial + i;
		}
	
	return faktorial;
	
	}
