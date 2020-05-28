#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[40];
  char cargo[20];
  char telefone[10];
  char email[30];
  float salario;
} CADASTRO;

CADASTRO Funcionario[2];
FILE *arquivo;

void Novo(){
  FILE *arquivo = fopen("arquivofuncionario.txt", "a");
  for(int i=0; i < 2; i++){
    printf("Nome %d°: ", i+1);
    getchar();
    fgets(Funcionario[i].nome, 40, stdin);
    printf("Cargo %d°: ", i+1);
    fgets(Funcionario[i].cargo, 20, stdin);
    printf("Telefone %d°: ", i+1);
    fgets(Funcionario[i].telefone, 10, stdin);
    printf("Email %d°: ", i+1);
    fgets(Funcionario[i].email, 30,stdin);
    printf("Salario %d°: ", i+1);
    scanf("%f", &Funcionario[i].salario);
    printf("--------------------------\n");
    fwrite(&Funcionario[i], sizeof(CADASTRO), 1 , arquivo);
  }
  fclose(arquivo);
}

void Buscar(){
  FILE *arquivo = fopen("arquivofuncionario.txt", "r");
  int retorno;
  char nome[50];

  if(arquivo == NULL){
    printf("Não foi possível abrir o arquivo.");
    exit(1);
  }

  printf("Digite o nome do funcionario que deseja buscar: ");
  getchar();
  fgets(nome, 30, stdin);

  while(!feof(arquivo)){
    for(int i=0; i < 5; i++){
      retorno = fread( &Funcionario[i], sizeof(CADASTRO), 1, arquivo);
      if (strcmp(nome, Funcionario[i].nome) == '\0'){
        printf("----------------------\n");
        printf(" Nome funcionario: %s\n", Funcionario[i].nome);
        printf(" Cargo funcionario: %s\n", Funcionario[i].cargo);
        printf(" Telefone funcionario: %s\n", Funcionario[i].telefone);
        printf(" Email funcionario: %s\n", Funcionario[i].email);
        printf(" Salario funcionario: %0.2f\n", Funcionario[i].salario);
        printf("----------------------\n");
      }
    }
  }
  fclose(arquivo);
}

int main(){
  Novo();
  Buscar();
  return 0;
}