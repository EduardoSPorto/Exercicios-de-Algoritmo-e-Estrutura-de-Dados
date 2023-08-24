#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10 //modo diferete de definir constante

struct Aluno {
    int ra; // ??
    char nome [ 50 ];
};
typedef struct Aluno Aluno;

struct Stack{
    Aluno alunos[MAX];
    int top;
    int base;
    int limit;
};
typedef struct Stack Stack;

void reset ( Stack *stack );
bool Empty ( Stack *stack);
bool Full ( Stack *stack );
bool PUSH ( Stack *stack, Aluno *item);
void POP ( Stack *stack , Aluno *aluno);
void listar(Stack *stack/*,Aluno *aluno*/);

int main (void){
    Stack novo;
    reset(&novo);
    int tempNota = 0;

    do{
    Aluno pessoa;
    printf("Nota:");
    scanf("%d",&tempNota);

    if(tempNota != 17){
    pessoa.ra = tempNota;
    printf("Nome:");
    scanf("%s",&pessoa.nome);
    PUSH(&novo,&pessoa);
    }
    }while(tempNota != 17);//strcpy(, "Joao");
    //novo.alunos->nome = "Joao";
    printf("- - -\n");

    listar(&novo);
    printf("\n- -\n");
    return 0;
}

void reset ( Stack *stack ){
    stack->top = 0;
    stack->base = 0;
    stack->limit = MAX;//MAX
}

void listar(Stack *stack/*,Aluno *aluno*/){
    
    while( !Empty ( stack ) ) {
    Aluno alu;
    POP ( stack , &alu );// & aluno
    printf("\nNota:%d  Nome-%s", alu.ra, alu.nome);
    }
}


bool Empty ( Stack *stack){ // Empity
    return stack->top == 0;
}

bool Full ( Stack *stack ){
    return stack->top == MAX;
}
bool PUSH ( Stack  *pilha, Aluno *item){// item 
    if( !Full ( pilha )){ // não funciona
        pilha->alunos[pilha->top] = *item; // item?
        pilha->top++;// Embaixo do que pega

        return true; // porque?
        //return 0;
    }
    else {
        //return 1;
        return false;// Porque?
    }
}

void POP ( Stack *stack , Aluno *aluno){
    if( stack->top == 0 ){
        return;
    }
    stack->top --;//#1 diminui o top e depois pega o valor do tamanho, como o Top funciona?
    *aluno = stack->alunos[stack->top];//#2 Não seria ao contrario
}


