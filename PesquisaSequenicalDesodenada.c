#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define TAM 10

int main() {
	int numeros[TAM];
	int i, j, b, aux;
  clock_t t;
	double tempo;

//Gerando numeros aleatorios e atribuindo as posic�es no vetor 
	
	
	srand(time(NULL)); //Garantindo a aleatoriedade da rand()
	printf("\nSequencia aleatoria:\n\n");
	
	for (i=0; i< TAM ; i++){
		
		numeros[i] = rand() % 1000 ;
		printf("%d ", numeros[i]);
	
	}
	printf("\n\n");
	printf("Ordenando:\n\n");

//Ordenando os vetores
t= clock();
 for(j=0; j< TAM; j++){
		for (i=0; i < TAM - 1; i++){
			if ( numeros [i] > numeros [i+1]){
				aux = numeros[i+1];
				numeros[i+1]= numeros [i];
				numeros[i]= aux;
		   }
    }
  }
t= clock()-t;
tempo= (t/(CLOCKS_PER_SEC/1000));




	printf("\n\nSequencia ordenada:\n\n");
	for (b=0; b < TAM ; b++){
			printf("%d ", numeros[b]);
	} 
printf("\n\n");

	printf("Tempo: %lf", tempo);
	return 0;
} 
    
