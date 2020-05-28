#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[30];
  char rua[50];
  int num;
  char bairro[50];
  char cidade[30];
  char estado[30];
  char cep[10];
} A;

typedef struct{
  A Copia;
} B;

A Cadastro;
B NovoCadastro;

int main (){
  printf("Nome: ");
  scanf(" %[^\n]s",Cadastro.nome);
  getchar();
  printf("Rua: ");
  scanf(" %[^\n]s",Cadastro.rua);
  getchar();
  printf("Numero: ");
  scanf(" %d",&Cadastro.num);
  getchar();
  printf("Bairro: ");
  scanf("%[^\n]s",Cadastro.bairro);
  getchar();
  printf("Cidade: ");
  scanf(" %[^\n]s",Cadastro.cidade);
  getchar();
  printf("Estado: ");
  scanf(" %[^\n]s",Cadastro.estado);
  getchar();
  printf("CEP: ");
  scanf(" %[^\n]s",Cadastro.cep);
  getchar();
  system("clear");
  memcpy(&NovoCadastro, &Cadastro, sizeof(NovoCadastro));
  printf("Nome: %s\nRua: %s\n", NovoCadastro.Copia.nome, NovoCadastro.Copia.rua);
  printf("Número: %d\nBairro: %s\n", NovoCadastro.Copia.num, NovoCadastro.Copia.bairro);
  printf("Cidade: %s\nEstado: %s\n", NovoCadastro.Copia.cidade, NovoCadastro.Copia.estado);
  printf("Cep: %s\n", NovoCadastro.Copia.cep);
}