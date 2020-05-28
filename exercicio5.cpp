#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[30];
  int idade;
} CADASTRO;

CADASTRO Pessoa[6];

int main(){
  int maior = 0, M;
  for(int i = 1; i < 6; i++){
    printf("Digite o nome da %d° pessoa:", i);
    fgets(Pessoa[i].nome,30,stdin);
    printf("Digite a idade da %d° pessoa:", i);
    scanf("%d", &Pessoa[i].idade);
    getchar();
  }
  system("clear");
  for(int k = 1; k < 6; k++){
    if(Pessoa[k].idade > maior){
      maior = Pessoa[k].idade;
      M = k;
    }
  }
  printf("Nome: %s\nIdade: %d\n", Pessoa[M].nome, Pessoa[M].idade);
  return 0;
}