#include <stdio.h>
#include <stdlib.h> //sandard lib contiene le istruzione per generare i numeri randomici
#include <time.h>   //time contiene le informazioni che servono alla standard lib per generare effettivamente i numeri

int main() {
    srand(time(NULL)); //crea il generatore

    // Genera un numero casuale da 0 a 32767
    int var1 = rand();


    // Genera un numero casuale da 0 a 99
    int var2 = rand() % 100;
}