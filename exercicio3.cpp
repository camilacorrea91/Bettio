#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char comercial[50];
  char residencial[50];
} ENDERECO;

typedef struct{
  char nome[30];
  ENDERECO Localizacao;
} CADASTRO;

CADASTRO Cliente[6];

int main(){
  for(int i=1; i < 6; i++){
    printf("Nome do %d° Cliente: ", i);
    scanf(" %[^\n]s", Cliente[i].nome);
    getchar();
    printf("Endereco Comercio do %d° Cliente: ", i);
    scanf(" %[^\n]s", Cliente[i].Localizacao.comercial);
    getchar();
    printf("Endereco Residencial do %d° Cliente: ", i);
    scanf(" %[^\n]s", Cliente[i].Localizacao.residencial);
    getchar();
  }
  system("clear");
  for(int k=1; k < 6; k++){
    printf("Nome do %d° Cliente: %s\n", k, Cliente[k].nome);
    printf("Endereco Comercial do %d° Cliente: %s\n", k, Cliente[k].Localizacao.comercial);
    printf("Endereco Residencial do %d° Cliente: %s\n", k, Cliente[k].Localizacao.residencial);
    printf("--------------------\n");
  }
  return 0;
}
