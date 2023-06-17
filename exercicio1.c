// 7) Alocação dinamica screva um programa que leia primeiro os 6 ...
#include <stdio.h>
#include <stdlib.h>

struct list{
    int n;
    struct list *prox; // *prox não "prox*" || struct *nome* *prox
};

typedef struct list lista;

lista *cabeca;
void colocaLista(int acerto);

int main (){
    int sorteado[5],i,c,escolhido[5],iguais=0;
    
    cabeca = (lista*) malloc(sizeof(lista));
	cabeca->prox=NULL;
	
	/*
	Teste de funcionamento da estrutura
	if (nun->prox==NULL)
		printf("<<>>");
	
	*/
	for(i=0;i<=5;i++){
	printf("Diga um numero %d da loteria ",i+1);
	scanf("%d",&sorteado[i]);
}
	
	for(i=0;i<=5;i++){
	printf("Diga um numero %d para o bilhete ",i+1);
	scanf("%d",&escolhido[i]);
	}
	
	for(i=0;i<=5;i++){
	for(c=0;c<=5;c++){
		if(sorteado[i]==escolhido[c]){
			iguais++;
			colocaLista(sorteado[i]); 
		}
	}
	}
	printf("\nNumero de iguais: %d\n\n",iguais);
	printf("Numeros acertados");
	while(cabeca->prox!= NULL){
		cabeca=cabeca->prox;
		printf("%d",cabeca->n);
	}
	
	printf("\n\nSorteados");
	i=0;
	while(i!=6){
		printf("%d",sorteado[i]);
		i++;
	}

	
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
	
	temp = (lista*) malloc(sizeof(lista));
	temp->prox = NULL;
	
	/*
	Teste de alocação

	if(temp->prox==NULL)
		printf("*");
	*/

	temp->n = acerto;
	/*
	Testando seleção correta de numeros similares e testando o conteudo de temp
	printf("%d",temp->n);
	*/
	temp->prox=cab->prox;
	cab->prox = temp;
	
}
