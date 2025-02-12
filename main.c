#include <stdio.h>


int main(void) {
    FILE *myFile;
    myFile = fopen("testo.txt", "r");
    if (myFile == NULL) {
        printf("Errore durante l'apertura del file\n");
        return 1;
    }
    float array[10];
    for (int i = 0; i < 10; i++) {
        fscanf(myFile, "%f", &array[i]);

    }

    int n = 10;
    int i, k;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (k = 0; k < n - 1 - i; k++) {
            if (array[k] > array[k + 1]) {
                temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
            }
        }
    }
    myFile = fopen("scrittura.txt", "w");
    for (int  i = 0; i < 10; i++) {

        fprintf(myFile, "%.2f\n", array[i]);
    }



return 0;
}
