#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int menor(int a, int b);
char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize);
int wordsSize = 4;

int main(){
    char *words[] = {"step", "steps", "stipe", "steeple" };
    char licensePlate[] = "1s3 PSt";

    printf("%s",shortestCompletingWord(licensePlate, words, 4));
    free(shortestCompletingWord(licensePlate, words, 4));
}

char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize){
    int i1=0, i2, i3, numeroRespostas=0;
    char pontaPlate [ strlen ( licensePlate ) + 1 ], candidatosRespostas [ wordsSize ] [ 15 ], resposta [ 100 ], *resposta2 = ( char* ) malloc ( sizeof ( char ) * 15 );
    while ( *licensePlate ) {
        if ( isalpha( *licensePlate) ) {
            pontaPlate [ i1 ] = tolower ( *licensePlate );
            i1++;
            }
        licensePlate++;
        }
    pontaPlate [ i1 ] = '\0';
    for( i1 = 0; i1 < wordsSize; i1++ ) {
        strcpy ( resposta, words [ i1 ] );
        for ( i2 = 0; (unsigned)i2 < strlen ( pontaPlate ) ; i2++ ){
            for ( i3 = 0; (unsigned)i3 < strlen ( resposta ) ; i3++ ){
                if ( pontaPlate[i2] == resposta[i3] ) {
                    resposta[i3] = '!';
                    break;
                }
            }
            if ( (unsigned)i3 == strlen( words [ i1 ] ) ){
                break;
            }
            }
        if( (unsigned)i2 == strlen ( pontaPlate ) ){
            strcpy ( candidatosRespostas [ numeroRespostas++ ], words [ i1 ] );
        }
        }
        strcpy (resposta2, candidatosRespostas [ 0 ] );
        i1 = 1;
        while ( i1 < numeroRespostas ) {
            if ( strlen ( resposta2) > strlen ( candidatosRespostas [ i1 ] ) ) {
            strcpy ( resposta2, candidatosRespostas [ i1 ] );
            }
        i1++;
        }
        return resposta2;
}