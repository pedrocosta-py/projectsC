#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* 
created by sudoAptIPedro
*/

//
void inserctionSort();
void selectionSort();
//
void inserctionSort(int *value, int num){
    int i, j, aux;
    for(i = 0; i<num; i++){
        aux = value[i];
        j = i-1;
        while((j>0)&&(aux<value[j])){
            value[j+1] = value[j];
            j--;
        }
        value[j+1] = aux;
    }
    printf("SEUS VALORES ORDENADOS (por insertion sort): \n\n");
	for(int p = 0; p<num; p++){
		printf("%d - ", value[p]);
	}
	system("pause");
}

//procedimento de troca de insercao:
void trocar(int *value, int o1, int o2){
    int auf;
    auf = value[o1];
    value[o1] = value[o2];
    value[o2] = auf;
}

void selectionSort(int *value2, int num2){
    int p, l, lin;
    for(p=0; p<num2-1; p++){
        lin = p;
        for(l = p+1; l<num2; l++){
            if(value2[l]<value2[lin]){
                lin = l;
            }
            if(p!=lin){
                trocar(value2, p, lin); //chamando o procedimento para efetuar a troca
            }
        }
    }
    printf("SEUS VALORES ORDENADOS (por selection sort): \n\n");
	for(int p = 0; p<num2; p++){
		printf("%d - ", value2[p]);
	}
	system("pause");
}


int main(){
    int i, x, h, nn=10;
	int valor[nn];
	
	
    printf("******* TRABALHANDO ORDENACAO! ******* ");
    printf("\nESCOLHA DEZ VALORES INTEIROS! ");
    
    for(i = 0; i<10; i++){
    	h = i + 1;
    	printf("\nSEU VALOR NUMERO %d: ", h);
        fflush(stdin);
    	scanf("%i", &valor[i]);
	}
    printf("digite um valor para iniciar! \n --> Seu valor por favor: \n");
    scanf("%i", &x);
    while(x%2==0){
        int op;
        printf("ESCOLHA UMA OPCAO PARA ORDENAR\n");
	    printf("\n [1] ORDENACAO PELO METODO ''SELECTION SORT''.\n");
	    printf("\n [2] ORDENACAO PELO METODO ''INSERTION SORT''.\n");
	    printf("\n [0] SAIR.");
	    
	    printf("\n\nSEU COMANDO SERA: ");
	    scanf("%i", &op);

        switch (op)
        {
        case 1:
            printf("voce escolheu a ordenação por selection sort!\n");
            selectionSort(valor, nn);
        break;
        case 2:
            printf("voce escolheu a ordenação por inserction sort!\n");
            inserctionSort(valor, nn);
        break;
        default:
            printf("Digite um valor valido!\n");
        break;
        }
        printf("--> Deseja continuar? Digite um numero par! \n -->");
        scanf("%i", &x);   
    }
    printf("======PROGRAMA ENCERRADO======");
}