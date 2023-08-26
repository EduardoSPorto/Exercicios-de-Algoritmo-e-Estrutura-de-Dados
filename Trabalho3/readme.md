# Trabalho prático 3 - Turma M1

**Aluno: Eduardo S. Porto**

**Problema: [Second Minimum Node In a Binary Tree](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree)**

- Aproveitando-se da objetividade de " valor pai = valor do menor filho" e procurando os menores números que não se encaixam nesta dinâmica, logo encontrando o segundo menor;

-Também retornando -1 caso a função não tiver um segundo menor;

Exemplos de resultado
```
//Input
A composição da árvore é: [2,2,5,null,null,5,7]
//Output
Segundo menor = 5
```
```
//Input
A composição da árvore é: [2,2,2]
//Output
Segundo menor =  -1
```
```
//Input
A composição da árvore é: [1,1,3,1,1,3,4,3,1]
//Output
Segundo menor = 3
```

