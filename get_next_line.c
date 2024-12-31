

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static  char *buffer;
    char    ligne;

    if (fd == 0 || BUFFER_SIZE == 0 || read (ds, 0, 0) < 0)
        return (NULL); // Le descripteur de fichier est valide et ouvert correctement.
                        //Le buffer a une taille utilisable pour stocker des données.


    return (buffer);
}

int main()
{
    char    *ligne; // la ligne qui va contenir la str renvoyer par gnl
    int texte;
    texte = open("boo.txt", O_RDONLY); // boo.txt mon fichier a lire, lu grace a open

    if (texte == -1) //verifie les pb de lecture/ouverture du fichier
    {
        close (boo.txt);
        return (1);
    }
    
    int etat; // etat change seulement il reste rien dans le fichier
    etat = 0;
    while (etat = 0)
    {
        ligne = get_next_line(texte);
        if (ligne == 0)
        {
            etat = 1;
            free(ligne); // si rien free >>  ?
            prinf("Plus rien chez boo"); // fin du fichier,
            break;
        }   
        printf("%s", ligne); // affiche la ligne renvoyer par gnl
        free(line); // free la ligne malloc renvoyer par gnl
    }
    close (texte); // comme dans testou c'est genre une syntaxte a la endif {open engendre close}
    return(0);
}
//les deux verifs du fd, valide et lisible (main et gnl) 
//sont plus securisant car la fonctions et le main peuvent potentiellement
// etre utilise independament l'un de l'autre

// fd = descrpiteur de fichier (boo.txt)
// buffer_size = (taille d'octect lu pour chaque appel de gnl)
// octect = unite de memoire = 8 bits = char
// 
//
