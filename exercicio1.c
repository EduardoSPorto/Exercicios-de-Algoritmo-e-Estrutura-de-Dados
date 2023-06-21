/* 
-7. Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6
numeros do seu bilhete. O programa ent nao compara quantos numeros o jogador acertou.
Em seguida, ele aloca espac¸o para um vetor de tamanho igual a quantidade de numeros
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os
numeros sorteados e os seus n ´umeros corretos.

-https://www.facom.ufu.br/~backes/wordpress/ListaC10.pdf

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct list{
    int n;
    struct list *prox; // *prox não "prox*" || struct *nome* *prox
};

typedef struct list lista;

lista *cabeca;
int digitoAleatorio(void);

void colocaLista(int acerto);
//void e  tranforma o criar em um ponteiro
lista *criarFunção(void);

int main(){
    int sorteado[5], i=0, c=0, escolhido[5], iguais=0;

	srand(time(NULL));

	cabeca = criarFunção();
	
	while(i != 6){
		sorteado[i] = digitoAleatorio();
		i++;

	}
	/*
	Teste de funcionamento da estrutura
	if (nun->prox==NULL)
		printf("<<>>");
	
	*/
	/*
	for(i=0; i <= 5; i++){
		printf("Diga um numero %d da loteria ",i+1);
		scanf("%d", &sorteado[i]);
}
	*/
	i=0;
	
	for(i=0; i <= 5; i++){
		printf("Diga um numero %d para o bilhete ",i+1);
		scanf("%d", &escolhido[i]);
	};
	
	for(i = 0; i <= 5; i++){
	for(c = 0; c <= 5; c++){
		if(sorteado[i] == escolhido[c]){
			iguais++;
			colocaLista(sorteado[i]); 
		}
	}
	}

	printf("\nNumero de iguais: %d",iguais);
	
	printf("\nNumeros acertados: ");

	while(cabeca-> prox != NULL){
		cabeca = cabeca->prox;
		printf("%d ",cabeca->n);
	}

	printf("\nSorteados: ");
	
	i=0;
	
	while(i != 6){
		printf("%d ",sorteado[i]);
		i++;
	}
	
	printf("\n");
	
	/*
	Teste de guardar informação
	
	
	i=0;
	printf("\nEscolhido:");
	while(i<=5){
	printf("%d",escolhido[i]);
	i++;
	};
	
	i=0;
	printf("\nBilhete:");
	while(i<=5){
	printf("%d",bilhete[i]);
	i++;
	};
	*/
}
// tentar alocar com função

void colocaLista(int acerto){

	lista *temp,*cab=cabeca;

	temp = criarFunção();;
	/*
	Teste de alocação

	if(temp->prox==NULL)
		printf("*");
	*/

	temp->n = acerto;
	/*
	Testando seleção correta de numeros similares e testando o conteudo de "temp"

	printf("%d",temp->n);
	*/
	temp->prox = cab->prox;
	cab->prox = temp;
	
}

	lista *criarFunção(void){
		lista *novo;
		novo = (lista*) malloc(sizeof(lista));
		novo->prox=NULL;
		return novo;
	}

	int digitoAleatorio(void){
		int numero = 17;
		numero = rand()%10;
		return numero;
	}