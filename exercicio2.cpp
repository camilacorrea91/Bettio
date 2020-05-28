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

CADASTRO Cliente;

int main(){
  printf("Nome: ");
  scanf(" %[^\n]s", Cliente.nome);
  getchar();
  printf("Endereco Comercio: ");
  scanf(" %[^\n]s", Cliente.Localizacao.comercial);
  getchar();
  printf("Endereco Residencial: ");
  scanf(" %[^\n]s", Cliente.Localizacao.residencial);
  system("clear");
  printf("Nome: %s\n", Cliente.nome);
  printf("Endereco Comercial: %s\n", Cliente.Localizacao.comercial);
  printf("Endereco Residencial: %s\n", Cliente.Localizacao.residencial);
  return 0;
}
