#include <stdio.h>
#include <string.h>

int main() {
    char titles[50][100];
    char Auteur[50][100];
    float prix[50];
    int Qs[50];
 


    for(int i = 0; i < 1; i++) {
        printf("Enter les information livres %d:\n", i + 1);

        printf("Titre : ");
        scanf("%s", &titles[i]);
        printf("Auteur : ");
        scanf("%s",&Auteur[i]);
        printf("Prix : ");
        scanf("%f", &prix[i]);
        printf("Quantité en stock : ");
        scanf("%d", &Qs[i]);
        printf("\n");
    }

    for(int i = 0; i < 1; i++) {
        printf("Titre : %s\n", titles[i]);
        printf("Auteur : %s\n", Auteur[i]);
        printf("Prix : %.2f\n", prix[i]);
        printf("Quantité en stock : %d\n", Qs[i]);
    }

    return 0;
}