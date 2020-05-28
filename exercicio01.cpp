#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[30];
  char telefone[10];
} CADASTRO;

CADASTRO Cliente;

int main(){
  printf("Digite o nome do cliente: ");
  scanf("%[^\n]s",Cliente.nome);
  getchar();
  printf("Digite o numero de telefone do cliente: ");
  scanf("%[^\n]s", Cliente.telefone);
  system("clear");
  printf("Nome do cliente: %s\nTelefone do cliente: %s\n", Cliente.nome, Cliente.telefone);
  return 0;
}