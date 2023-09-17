/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes){
  int i, j, k, l;
  //Testes:
  //printf("%d",intervals[1][0]);
  //printf("%d",returnColumnSizes[0][0]);
  //printf("%d",returnSize[1]);
  //printf("%d",intervalsSize);

  int **newVal = (int**) malloc(sizeof( int *)* 3); // 3 é returnSize? numero de LINHS no retorno
    for ( i = 0; i < 1; i++){ // ++ esse 1 provavelmente é referente a um dos inputs( numero de COLUNAS(returnColumnSizes?))
      newVal[i] = (int*) malloc(sizeof( int *)* 2);// ++
    }
    k = 0;
    l = 0;
    for( k = 0; k != intervalsSize ; k++ ){// troca de linhas troca de micro, talvez usar o k, e subir de acordo com e reverter quem é FOR, quem é interno
      for( l = 0; l!=  1; l++){ // ++
        if ( intervals[i][j]  >= intervals[i++][j]){
          newVal[k][l] = intervals[i][j]; 
          l ++;
          newVal[k][l] = intervals[++i][++j];
          k++;
          l = 0;
          i += 2;
          j += 2;
        }else{
          newVal[k][l] = intervals[i][j];
          i++;
          j++;
        }
      }
    }
  return intervals;// não retornando newVal
}
/*
  intervals[i] = [start(i), end(i)]
  Representação artistica:
    - ex 1: Intervals [0][0] = 1
            Intervals [0][1] = 3
            Intervals [1][0] = 2
            Intervals [1][1] = 6
  [1],[3] 
  [2],[6]
  [8],[10]
  [15],[18]

  intervals é array
  Overlaping intervals
      - 1 a 3 & 2 a 6, neste caso o 3 é maior que 2, logo overlaping, faz para todo overlaping
      - Depois junta, pegando o maior menor do primeiro, e o maior do segundo
      - Sempre em ordem ?
        Como é salvo:
          É um vetor de vetores, os microvetores tem sempre dois componentes

  Como fazer
  int newVal = (int*) malloc (sizeof( int * *returnSize));
    for( i != intervaSize ){// troca de linhas troca de micro
      for( j !=  1)
        if ( (3)intervalls[i(0)][j(1)]  >= (2)intervalls[i++(1)],j(0)]:){
          newVal[k][k2] = intervalls[i(0)][j(0)]; 
          k2 ++;
          newVal[k][k2] = intervalls[++i(1)][++j(1)];
          k++;
          k2 = 0;
          // Não ler o proximo caso isso for atingido?
        }else{
          newVal[k][k2] = intervalls[i(0)][j(1)];
        }
        // Agora, nesse codigo ele vai para frente,para o proximo
    }
    */