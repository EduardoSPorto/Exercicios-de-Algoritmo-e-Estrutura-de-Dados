char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize){    
    int resposta = 0,i=0,i2;
    char *pontaPlate;
    pontaPlate = licensePlate;
    
    while (i != wordsSize){
        if (words[i][i2] != licensePlate){
            i2++;
            licensePlate = pontaPlate;
        };
        licensePlate++;
        resposta = menor(sizeof(words[i]),sizeof(words[resposta])); 
        i++;
        }
    return words[resposta];
    }

    int menor(int a, int b){
        if(a < b)
            return a;
        else 
            return b;
    }
