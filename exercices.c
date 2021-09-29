//
// Created by maxim on 29/09/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "fonction.h"
void exercice1() {
    int entier1, entier2;
    printf("Choisir deux entier :\n");
    scanf("%d %d",&entier1,&entier2);
    printf("Le plus grand est %d", getMax(entier1,entier2));
}
void exercice2() {
    printf("L entier saisit est : %d",saisirEntier());
}
void exercice3() {
    int longueur,largeur;
    longueur=saisirEntier();
    largeur=saisirEntier();
    printf("Le perimetre est :\n %d\nL aire est :\n %d", calculPerimetre(longueur,largeur), calculAire(longueur,largeur));
}
void exercice4() {
    int entier;
    entier=saisirEntier();
    (multiple(3,entier)==1)
    ? printf("c est un multiple de 3\n")
    : printf("ce n est pas un multiple de 3\n");
    (entier<10)
    ? printf("c est un entier inferieur a 10")
    : printf("c est un entier superieur ou egal a 10");
}
void exercice5() {
    float note1,note2,note3;
    note1=saisirEntier();
    note2=saisirEntier();
    note3=saisirEntier();
    while ((moyenne(note1,note2,note3))==-1) {
        printf("Veuillez rerentrer les notes \n");
        note1=saisirEntier();
        note2=saisirEntier();
        note3=saisirEntier();
    }
    printf("La moyenne des notes est : %f",moyenne(note1,note2,note3));
}
