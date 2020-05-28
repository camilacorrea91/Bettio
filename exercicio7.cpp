#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct{
    char nome[40];
    char cargo[20];
    char telefone[10];
    char email[30];
    float salario;
} CADASTRO;

CADASTRO Funcionario[TAM];

int quant;

int main(){
  inicio:
  int opcao;

  printf("* Opcoes da Agenda: \n");
  printf("\n");
  printf("1 - Adicionar novo funcionario \n");
  printf("2 - Remover funcionario \n");
  printf("3 - Buscar funcionario  \n");
  printf("4 - Editar funcionario \n");
  printf("5 - Sair \n");
  printf("\nDigite o numero, de uma das opções listadas, para realizar uma acao: ");
	scanf("%d", &opcao);

  if(opcao == 1){
    int  aux;
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
        printf("--------------------------\n");
      }
   goto inicio;
  }

  if(opcao == 2){
    char nome[30], resp;

    printf("Digite o nome do funcionario que deseja remover: ");
    getchar();
    fgets(nome, 30,stdin);

    for(int i=1; i < quant; i++){
      if(strcmp(Funcionario[i].nome, nome)==0){
        printf("Nome: %s\n ", Funcionario[i].nome);
        printf("Cargo: %s\n ", Funcionario[i].cargo);
        printf("telefone: %s\n ", Funcionario[i].telefone);
        printf("email: %s\n ", Funcionario[i].email);
        printf("salario: %0.2f\n ", Funcionario[i].salario);
        printf("Deseja realmente remover?  S/N");
        scanf("%s", &resp);
        if(resp=='S'||resp=='s'){
          for(int p = 0; p <= i; p++){
            strcpy(Funcionario[i].nome, "\0");
            printf("cadastro removido\n");
            break;
          }
        }
      }
    }
    goto inicio;
  }

  if(opcao == 3){
    char nome[30];

    printf("Digite o nome do funcionario que deseja buscar: ");
    getchar();
    fgets(nome, 30, stdin);
    
    for(int c = 0; c < quant; c++){
      if (strcmp(nome, Funcionario[c].nome) == '\0'){
        printf("----------------------\n");
        printf("Nome funcionario: %s\n", Funcionario[c].nome);
        printf("Cargo funcionario: %s\n", Funcionario[c].cargo);
        printf("Telefone funcionario: %s\n", Funcionario[c].telefone);
        printf("Email funcionario: %s\n", Funcionario[c].email);
        printf("Salario funcionario: %0.2f\n", Funcionario[c].salario);
        printf("----------------------\n");
      }
    }
    goto inicio;
  }

  if(opcao == 4){
    char nome[30], resp;

    printf("Digitar o nome do funcionario que deseja editar: ");
    getchar();
    fgets(nome, 30, stdin);
  
    for(int u = 0; u < quant; u++){
      if (strcmp(Funcionario[u].nome, nome) == 0){
        printf("Cargo do funcionario %s: ", nome);
        fgets(Funcionario[u].cargo, 20, stdin);
        printf("Telefone do funcionario %s: ", nome);
        fgets(Funcionario[u].telefone, 10, stdin);
        printf("Email do funcionario %s: ", nome);
        fgets(Funcionario[u].email, 30,stdin);
        printf("Salario do funcionario %s: ", nome);
        scanf("%f", &Funcionario[u].salario);
        printf("Cadastro do funcionario %s alterado com sucesso\n", nome);
      }
    }
    goto inicio;
  }

  if(opcao == 5){
      exit;
  }
}
