#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int procura(int numeros[], int TAM, int elementoProcurado) {
     int k=0;
     while (k < TAM ) {
         if (numeros[k] == elementoProcurado) {
             return k+1;
         } else{
             k++;
         }
     }
     
 }


int main() {
    int TAM = 10;
	int numeros[TAM];
	int i, elementoProcurado;
	

//Gerando numeros aleatorios e atribuindo as posic�es no vetor 
	
	srand(time(NULL)); //Garantindo a aleatoriedade da rand()
	printf("\nSequencia aleatoria:\n\n");
	
	for (i=0; i< TAM ; i++){
		
		numeros[i] = rand() % 1000 ;
		printf("%d ", numeros[i]);
	
	}
	
	printf("\n\nQual o numero que deseja saber a localização ? ");
	scanf("%d", &elementoProcurado);
	
	int retorno = procura(numeros, TAM, elementoProcurado);
	
	printf("A localização do numero %d é %d",elementoProcurado, retorno);
	
	return 0;
} 

