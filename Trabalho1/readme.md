# Trabalho prático 1 - Turma M1

**Aluno: Eduardo S. Porto**

**Problema: [shortest-completing-word](leetcode.com/problems/shortest-completing-word)**

-Primeiro se buscou isolar os caracteres uteis dentre os membros de "licensePlate", os uteis são definidos por serem parte do alfabeto

-Depois se isolou as palavras que contem todas as letras da versão util de licensePlate

-Por último uma lista (baseada nas palavras anterior) é ordenada para descobrir a palavra de menor tamanho (ou seja, o resultado)

Exemplos de resultado
```
//input
words [ ] = { "step", "steps", "stipe", "steeple" };
licensePlate [ ] = "1s3 PSt";
//Output
steps
```
```
//input
words [ ] = { "looks", "pest", "stew", "show" };
licensePlate [ ] = "1s3 456";
//Output
pest
```
```
//input
words [ ] = { "pl","step","steps","stripe","stepple" };
licensePlate [ ] = "1PLE";
//Output
stepple
```

