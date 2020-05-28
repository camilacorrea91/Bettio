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
int cont=1, opcao = 0;

void Remover(){

  char nome[30];

  printf("Digite o nome do funcionario que deseja remover: ");
  getchar();
  fgets(nome, 30,stdin);

  for(int i=1; i < 5; i++){
    if(strcmp(Funcionario[i].nome, nome)==0){
      *Funcionario[i].nome = '\n';
      printf("uato removido\n");
      i--;
      break;
    }
   }
  }
void Buscar(){
  char nome[30];

  printf("Digite o nome do funcionario que deseja buscar: ");
  getchar();
  fgets(nome, 30, stdin);

  for(int c = 1; c < 5; c++){
    if (strcmp(nome, Funcionario[c].nome) == 0){
      printf("Nome: %s\n", Funcionario[c].nome);
      printf("Cargo: %s\n", Funcionario[c].cargo);
      printf("Telefone: %s\n", Funcionario[c].telefone);
      printf("Email: %s\n", Funcionario[c].email);
      printf("Salario: %2.0f\n", Funcionario[c].salario);
    }
  }
}

void Editar(){
  char nome[30];

  printf("Digitar o nome do funcionario que deseja editar: ");
  getchar();
  fgets(nome, 30, stdin);

  for(int u = 1; u < 5; u++){
    if (strcmp(Funcionario[u].nome, nome) == 0){
    printf("Nome %d°: ", u);
    getchar();
    fgets(Funcionario[u].nome, 40, stdin);
    printf("Cargo %d°: ", u);
    fgets(Funcionario[u].cargo, 20, stdin);
    printf("Telefone %d°: ", u);
    fgets(Funcionario[u].telefone, 10, stdin);
    printf("Email %d°: ", u);
    fgets(Funcionario[u].email, 30,stdin);
    printf("Salario %d°: ", u);
    scanf("%f", &Funcionario[u].salario);
    }
  }
}

void Sair(){
  exit;
  }

void MENU(){
    printf("* Opcoes da Agenda: \n");
    printf("\n");
    printf("1 - Adicionar novo funcionario \n");
    printf("2 - Remover funcionario \n");
    printf("3 - Buscar funcionario  \n");
    printf("4 - Editar funcionario \n");
    printf("5 - Sair \n");
    printf("\nDigite o numero, de uma das opções listadas, para realizar uma acao: ");
	  scanf("%d", &opcao);

    switch (opcao){
      case 1:
        int quant, aux;
        printf("Quantos cadastros deseja inserir na agenda? ");
        scanf("%d", &quant);
        aux = quant;
        for(int i = 0; i < quant; i++){
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
        }if(aux == quant){
          MENU();
        }
      break;

      case 2:
        Remover();
        MENU();
      break;

      case 3:
        Buscar();
        MENU();
      break;

      case 4:
        Editar();
        MENU();
      break;  
      
      case 5:
        Sair();
      break;
    }
}
int main(){
  MENU();
}
