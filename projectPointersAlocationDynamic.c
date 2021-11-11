#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* 
created by sudoAptIPedro
*/

int const MAX = 10;

typedef struct lista_clientes{
    char nomeCompleto[100], endereco[100] , telefone[21];
    int idade;
}lista_clientes;


int main() {
	int continuar = 2;
	int tamanhoFinal = 0;
	//
	struct lista_clientes *clientes;
	FILE *clientesCadastro;
	
    //
    clientes = (struct lista_clientes*) malloc(sizeof(struct lista_clientes));
	clientesCadastro = fopen("clientes.txt", "w");
	
    printf("        $$\                           $$\     $$\   \n");
    printf("       $$ |                          $$ |    \__|   \n");
    printf("        $$$$$$\    $$$$$$\   $$$$$$$\ $$$$$$\   $$\ $$$$$$$\   $$$$$$\ \n");
    printf("        \_$$  _|  $$  __$$\ $$  _____|\_$$  _|  $$ |$$  __$$\ $$  __$$\ \n");
    printf("         $$ |    $$$$$$$$ |\$$$$$$\    $$ |    $$ |$$ |  $$ |$$ /  $$ | \n");
    printf("         $$ |$$\ $$   ____| \____$$\   $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \n");
    printf("         \$$$$  |\$$$$$$$\ $$$$$$$  |  \$$$$  |$$ |$$ |  $$ |\$$$$$$$ | \n");
    printf("         \____/  \_______|\_______/    \____/ \__|\__|  \__| \____$$ | \n");
    printf("                                                            $$\   $$ | \n");
    printf("                                                            \$$$$$$  | \n");
    printf("                                                           \______/ \n");

	// ARMAZENANDO VALORES
	for(int i=0; i<MAX; i++){
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
		//
		
		printf("\n");
		
			if(i <= MAX - 1) {
				printf("Deseja realizar mais um cadastro? Digite 2 para continuar\n\n");
				scanf("%d", &continuar);
				printf("\n");
				
				if(continuar != 2) {
					tamanhoFinal = i;
					break;
				}
			}
		
		tamanhoFinal = i;
	}
	system("cls");
	
	// IMPRIMINDO VALORES
	for(int i = 1; i <= tamanhoFinal; i++) {
		printf("seus registros sao:\n\n");
	    //
	    printf("O nome digitado foi : %s\n\n",clientes->nomeCompleto);
	    printf("O endereco digitado foi : %s\n\n",clientes->endereco);
	    printf("O telefone digitado foi: %s\n\n",clientes->telefone);
	    printf("A idade digitada foi: %s\n\n",clientes->idade);
	}
    printf("\n=====PROGRAMA ENCERRADO=====\n");
}