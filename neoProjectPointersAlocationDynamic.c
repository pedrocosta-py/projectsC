#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* 
created by sudoAptIPedro
*/

void theArchives(); 

int const MAX = 10;

typedef struct lista_clientes{
    char nomeCompleto[100], endereco[100] , telefone[21];
    int idade;
}lista_clientes;

void theArchives(int t){
        int finalTam, i;
	    struct lista_clientes *clientes;
		FILE *clientesCadastro;
		
	    //
	    clientes = (struct lista_clientes*) malloc(sizeof(struct lista_clientes));
		clientesCadastro = fopen("umTexte.txt", "w");
		
		// ARMAZENANDO VALORES
        while(t%2==0){
            for(i=0; i<MAX; i++){
                printf(" -> Por favor, digite seu nome de até 100 caracteres:\n");
                //entrada de dados para exibiçao no console
                fflush(stdin);
                gets(clientes->nomeCompleto);
                //escrita de dados no arquivo.txt
                if(clientesCadastro != NULL){
                    printf("DADOS CADASTRADOS\n");
                    fprintf(clientesCadastro, clientes->nomeCompleto);
                    fprintf(clientesCadastro, "\n\n");
                }else{
                    printf("Dados não cadastrados! Verifique seu arquivo!");
                }
                //
                printf("\n\n -> Por favor, digite seu endereco de ate 100 caracteres:\n");
                //entrada de dados para exibiçao no console
                fflush(stdin);
                gets(clientes->endereco);
                //escrita de dados no arquivo.txt
                if(clientesCadastro != NULL){
                    printf("DADOS CADASTRADOS\n");
                    fprintf(clientesCadastro, clientes->endereco);
                    fprintf(clientesCadastro, "\n\n");
                }else{
                    printf("Dados não cadastrados! Verifique seu arquivo!");
                }
                //
                printf("\n\n -> Por favor digite seu numero de telefone de acordo com o exemplo abaixo \n +55 (21) 99999 - 9999 \n\n -> Digite por favor:\n");
                //entrada de dados para exibiçao no console
                fflush(stdin);
                gets(clientes->telefone);
                //escrita de dados no arquivo.txt
                if(clientesCadastro != NULL){
                    printf("DADOS CADASTRADOS\n");
                    fprintf(clientesCadastro, clientes->telefone);
                    fprintf(clientesCadastro, "\n\n");
                }else{
                    printf("Dados não cadastrados! Verifique seu arquivo!");
                }
                //
                printf("\n\n -> Por favor, digite sua idade:\n");
                //entrada de dados para exibiçao no console
                fflush(stdin);
                scanf("%d", &clientes->idade);
                //escrita de dados no arquivo.txt
                if(clientesCadastro != NULL){
                    printf("DADOS CADASTRADOS\n");
                    fprintf(clientesCadastro, "%d", clientes->idade);
                    fprintf(clientesCadastro, "\n\n");
                }else{
                    printf("Dados não cadastrados! Verifique seu arquivo!");
                }

                 printf("\n\n");
                if(i < MAX){
                    printf("deseja cadastrar mais um numero?\n");
                    scanf("%d", &t);
                        
                        if ((t!=0)&&(t!=NULL)){
                            finalTam = i;
                            break;
                        }
                    
                }
                finalTam = i;

                //limpa a tela:
                system("cls");
                //impressao dos resultados
                for(int i = 1; i <= finalTam; i++) {
	 	        printf("seus registros sao:\n\n");
                //
                printf("O nome digitado foi : %s\n\n",clientes->nomeCompleto);
                printf("O endereco digitado foi : %s\n\n",clientes->endereco);
                printf("O telefone digitado foi: %s\n\n",clientes->telefone);
                printf("A idade digitada foi: %s\n\n",clientes->idade);
                }
                printf("\n=====PROGRAMA ENCERRADO=====\n");

            }   
        }        
}

int main() {
    int u;
    printf("bem vindo ao registro de clientes!\n Digite um numero par para iniciar: \n");
    scanf("%d", &u);
    //teste condicional para saber se a variavel possui valor
    if((u!=NULL)&&(u%2==0)){
        theArchives(u);
    }
    else{
      printf("\n=====PROGRAMA ENCERRADO=====\n");  
    }

}