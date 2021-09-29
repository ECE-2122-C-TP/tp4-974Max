//
// Created by maxim on 29/09/2021.
//

#ifndef TP04_FONCTION_H
#define TP04_FONCTION_H
/*
 * IN : deux entiers
 * OUT : le plus grand des deux entiers
 */
int getMax(int entier1, int entier2);
/*
 * IN : rien
 * OUT : un entier saisit au clavier
 */
int saisirEntier();
/*
 * IN : deux entiers caractérisant le rectangle
 * OUT : l'air du rectangle
 */
int calculAire(int longueur,int largeur);
/*
 * IN : deux entiers caractérisant le rectangle
 * OUT : le perimetre du rectangle
 */
int calculPerimetre(int longueur, int largeur);
int multiple(int entier1, int entier2);
float moyenne(float note1, float note2, float note3);
#endif //TP04_FONCTION_H
