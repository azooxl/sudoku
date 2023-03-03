#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/






// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/


/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/


/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/

/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/

//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon


//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    int v;
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", solution[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n"); 
    //toucher le code entre les commentaires
    
void generer(board)
{
    int f = 0;
    int x,y;
    int solution[9][9];
    int remplissage;
    int board[9][9] = board[9][9];
    srand( time( NULL ) );
    while (f<30)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        board[x][y] = 0;
        f++;
    }
    printf("JEU");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    
    for(i=0;i<9; ++i) 
    {
        for(j=0; j<9; ++j)
            printf("%d ", board[i][j]);
        printf("\n");  
    }
    remplissage = 51;
}


void saisir(){
        printf("Veuillez choisir un emplacemenment i et j et la valeur à ajouter");
        scanf("%d %d %d", &i, &j, &v);
        int remplissage = 51;
        
        if (i>9)
        {
            printf("Veuillez rentrer un chiffre");
        }
        else if (j>9){
            printf("Veuillez rentrer un chiffre");
        }
        else if (j<9){
            printf("Veuillez rentrer un chiffre");
        }
        else if (i<9){
            printf("Veuillez rentrer un chiffre");
        }
        else if (v>9){
            printf("Veuillez rentrer un chiffre");
        }
        else if (v<0)
        {
            printf("On ne joue pas avec des chiffres négatifs");
        }
        else{
            printf("Vérification de l'emplcement");
        }
        switch (board[i][j])
        {
            case 1:
            if (board[i][j] == 1)
            {
                printf("Case occupée");
            }
                break;
            case 2:
                if (board[i][j] == 1)
            {
                printf("Case occupée");
            }
                break;
            case 3:
                if (board[i][j] == 2)
            {
                printf("Case occupée");
            }
                break;

            case 4:
                if (board[i][j] == 3)
            {
                printf("Case occupée");
            
                break;}

            case 5:
                if (board[i][j] == 4)
            {
                printf("Case occupée");
            
                break;}

            case 6:
                if (board[i][j] == 5)
            {
                printf("Case occupée");
            
                break;}

            case 7:
                if (board[i][j] == 6)
            {
                printf("Case occupée");
            
                break;
            }

            case 8:
                if (board[i][j] == 7)
            {
                printf("Case occupée");
            
                break;
            }

            case 9:
                if (board[i][j] == 8)
            {
                printf("Case occupée");
            
                break;
            }

            case 10:
                if (board[i][j] == 9)
            {
                printf("Case occupée");
            
                break;
            }
            
            default:{
                board[i][j] == v;
                remplissage++;
            }
        }
}

void verifierLigneCollone(){
    int cmp_tab(){
     for(i=0;i<9;i++) {
       if (solution[i]!=board[i]) return 0;
        else if (solution[j]!=board[j])return 0;
     }
     
     return 1;
}
    
}  

void verifierRegion(){
   switch (verifierRegion)
   {
        case 1 :
            for(i=0;i<3;i++) {
                if (solution[i]!=board[i]) {
                    return 0;
                    }}
                    for(j=0;j<3;j++)
                        if (solution[j]!=board[j])
                        {
                            return 0;
                        }
                        for(i=3;i<6;i++) {
                            if (solution[i]!=board[i]) {
                                return 0;
                            }}
                            for(j=0;j<3;j++)
                                if (solution[j]!=board[j])
                                {
                                    return 0;
                                }
                                for(i=6;i<9;i++){ 
                                    if (solution[i]!=board[i]) {
                                        return 0;
                                    }}
        case 2 :
            for(i=0;i<3;i++) {
                if (solution[i]!=board[i]) {
                    return 0;
                    }}
                    for(j=3;j<6;j++)
                        if (solution[j]!=board[j])
                        {
                            return 0;
                        }
                        for(i=3;i<6;i++) {
                            if (solution[i]!=board[i]) {
                                return 0;
                            }}
                            for(j=3;j<6;j++){
                                if (solution[j]!=board[j])
                                {
                                    return 0;
                                }}
                                for(i=6;i<9;i++){ 
                                    if (solution[i]!=board[i]) {
                                        return 0;
                                    }} 
                                    for(j=3;j<6;j++){
                                        if (solution[j]!=board[j])
                                        {
                                            return 0;
                                        }}   
        case 3 :
            for(i=0;i<3;i++) {
                if (solution[i]!=board[i]) {
                    return 0;
                    }}
                    for(j=6;j<9;j++)
                        if (solution[j]!=board[j])
                        {
                            return 0;
                        }
                        for(i=3;i<6;i++) {
                            if (solution[i]!=board[i]) {
                                return 0;
                            }}
                            for(j=6;j<9;j++){
                                if (solution[j]!=board[j])
                                {
                                    return 0;
                                }}
                                for(i=6;i<9;i++){ 
                                    if (solution[i]!=board[i]) {
                                        return 0;
                                    }} 
                                    for(j=6;j<9;j++){
                                        if (solution[j]!=board[j])
                                        {
                                            return 0;
                                        }}
    
   }
//IMPOSIBLE DE COMPILER LE CODE AVEC LA COMMANDE GCC//
    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}








    
  
