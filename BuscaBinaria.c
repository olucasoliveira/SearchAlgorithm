#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PesquisaBinaria (int numeros[], int elementoProcurado, int TAM)
{
     int inicio = 0;    
     int  fim = TAM-1; 
     int meio;
     while (inicio <= fim)
     {
          meio = (inicio + fim)/2;
          if (elementoProcurado == numeros[meio])
               return meio;
          if (elementoProcurado < numeros[meio])
               fim = meio-1;
          else
               inicio = meio+1;
     }
     return -1;   // não encontrado
}


int main() {
    int TAM = 10;
	int numeros[TAM];
	int i, j, b, aux, elementoProcurado;
	int ordem = 0;
	

//Gerando numeros aleatorios e atribuindo as posic�es no vetor 
	
	srand(time(NULL)); //Garantindo a aleatoriedade da rand()
	printf("\nSequencia aleatoria:\n\n");
	
	for (i=0; i< TAM ; i++){
		
		numeros[i] = rand() % 1000 ;
		printf("%d ", numeros[i]);
	
	}

//Ordenando os vetores

	for(j=0; j< TAM; j++){
		for (i=ordem; i < TAM; i++){
			if ( numeros [j] > numeros [i]){
				aux = numeros[j];
				numeros[j]= numeros [i];
				numeros[i]= aux;
				
			}
			
		}
		ordem += 1;
	}
	printf("\n\nSequencia ordenada:\n\n");
	for (b=0; b < TAM ; b++){
			printf("%d ", numeros[b]);
	}
	
	printf("\n\nQual o numero que deseja saber a localização ? ");
	scanf("%d", &elementoProcurado);
	
	int retorno = PesquisaBinaria(numeros, elementoProcurado, TAM);
	
	if (retorno >= 0 ){
	    printf("A localização do numero %d é %d",elementoProcurado, retorno);
	}else{
	    printf("O numero %d não foi localizado ",elementoProcurado);
	}
	
	
	
	return 0;
} 
