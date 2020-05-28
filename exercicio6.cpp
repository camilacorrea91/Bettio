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

CADASTRO Funcionario[5];

int main(){
  float maior = 0.0, soma = 0.0;
  int M, B;
  bool telefone = false;
  for(int i=0; i < 5; i++){
    printf("Nome do %d° Funcionario: ", i+1);
    fgets(Funcionario[i].nome, 40, stdin);
    printf("Cargo do %d° Funcionario: ", i+1);
    fgets(Funcionario[i].cargo, 20, stdin);
    printf("Telefone do %d° Funcionario: ", i+1);
    fgets(Funcionario[i].telefone, 10, stdin);
    printf("Email do %d° Funcionario: ", i+1);
    fgets(Funcionario[i].email, 30, stdin);
    printf("Salario do %d Funcionario: ", i+1);
    scanf("%f", &Funcionario[i].salario);
    getchar();
  }
  system("clear");
  for(int j = 0; j < 5; j++){
    soma += Funcionario[j].salario;
  }
  for(int k = 0; k < 5; k++){
    if(Funcionario[k].salario > maior){
      maior = Funcionario[k].salario;
      M = k;
    }
  }
  for(int c = 0; c < 5; c++){
    if(Funcionario[c].telefone[0] == '\n'){
      telefone = true;
      B = c;
    }
  }
  if(telefone == true){
    printf("Existe campos de telefone em branco");
    printf("\n---------------------------\n");
  }
  printf("Soma dos salarios dos funcionarios: %0.2f\n", soma);
  printf("---------------------------\n");
  printf("Funcionario com maior salario\n");
  printf("Nome: %s\nSalario: %0.2f\n", Funcionario[M].nome, Funcionario[M].salario);
  return 0;
}