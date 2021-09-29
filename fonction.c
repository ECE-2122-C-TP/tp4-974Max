//
// Created by maxim on 29/09/2021.
//
#include <stdio.h>
#include "fonction.h"
int getMax(int entier1, int entier2) {
    return(entier1 < entier2) ?entier2 :entier1;
}
int saisirEntier() {
    int entier;
    printf("Choisisser un entier :\n");
    scanf("%d",&entier);
    return(entier);
}
int calculAire(int longueur, int largeur) {
    return(longueur*largeur);
}
int calculPerimetre(int longueur,int largeur) {
    return((longueur+largeur)*2);
}
int multiple(int entier1, int entier2) {
    return(entier2%entier1==0) ?1 :0;
}
float moyenne(float note1, float note2, float note3) {
    if (0>note1 || note1>20 || 0>note2 || note2>20 || 0>note3 || note3>20) {
        return(-1);
    }
    else {
        return((note1+note2+note3)/3);
    }
}