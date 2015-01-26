/* Esercizio 1 Pagina 268
 * Sia data una sequenza di numeri interi positivi diversi da zero. I valori sono letti in input da tastiera e hanno come tappo l'inserimento dello 0.
 * Presenta un menu' per l'esecuzione delle seguenti opzioni :
 * -calcolo del numero di coppie di numeri consecutivi uguali;
 * -calcolo del numero di coppie in cui il secondo numero è divisore del primo (non uguali);
 * -visualizzazione di un messaggio che dica quale tipo di coppie tra i due precedenti è presente in nmero maggiore.
 * CAMBIAMENTI : non è stato immesso il tappo 0; i membri delle coppie possono fare parte di due coppie. Questo sta a significare che avendo 3 numeri consecutivi l'algoritmo
 * conteggierà due coppie di numeri consecutivi. */

#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

const int DIM = 10;

int main(void) {
    
    int vettore[DIM];
    int i, scelta, risultato, comparatore;
    
    printf("Esercizio 1 di Pagina 268\n");
    printf("Inserisci %d numeri interi positivi\n", DIM);
    
    for (i = 0; i < DIM; i++) {
        printf("Inserisci il valore %d :", i);
        scanf("%d", &(vettore[i]));
    }
    
    printf("1. Calcolo del numero di coppie consecutivi uguali;\n");
    printf("2. Calcolo del numero di coppie in cui il secondo numero è divisore del primo (non uguali);\n");
    printf("3. Quale tipo di coppie tra i due precedenti è presente in nmero maggiore.\n");
    printf("Scegli che opzione vuoi eseguire : ");
    scanf("%d", &scelta);
    printf("\n");
    
    switch (scelta) {
        case 1 :
            risultato = numeriuguali(vettore, DIM);
            printf("\nIl numero di coppie e' %d", risultato);
            break;
        case 2 :
            risultato = numeridivisori(vettore, DIM);
            printf("\nIl numero di coppie e' %d\n", risultato);
        case 3 :
            risultato = numeriuguali(vettore, DIM);
            comparatore = numeridivisori(vettore, DIM);
            if (risultato > comparatore) {
                printf("\nIl tipo di coppie di maggiore presenza e' : Coppie di numeri consecutivi e uguali\n");
            }
            if (risultato == comparatore) {
                printf("\nI due tipi di coppie sono presenti uguale presenza\n");
            }
            if (risultato < comparatore) {
                printf("\nIl tipo di coppie di maggiore presenza e' : Coppie di numeri con divisori\n");
            }
            break;
        default :
            printf("\nL'opzione che hai digitato non e' disponibile\n");
        }
    return (EXIT_SUCCESS);
}

