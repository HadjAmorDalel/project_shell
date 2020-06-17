#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Structure.h"

void saisie(int *n)
{
    do
    {
        printf("how much directories you want to allocate ? /n ");
        scanf("%d", n);
    } while ((*n < 0) || (*n > 200));
}

bool Isalpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool verif(char ch[255])
{
	int i;
    bool a, b;
    if (Isalpha(ch[255]) == false)
    {
        printf("The first character should be a alphabetic char");
        a = false;
    }
    else
    {
        a = true;
    }

    for ( i = 1; i < strlen(ch) - 1; i++)
    {
        if (Isalpha(ch[i]) && (ch[i] >= '0' && ch[i] <= '9'))
        {
            b = true;
        }
        else
        {
            printf("the name can only contain alphabetic and numeric characters ");
            b = false;
        }
    }
    return a && b;
}

bool Search_rep(char *ch, rep *tab, int rang)
{
    bool a, b;
    int j, i = 0;
    if (rang == 0)
    {
        a = true;
    }
    else
    {
        while (i < rang)
        {
            if (tab[i].name == ch)
            {
                printf("this name exist in the tab");
                a = false;
                break;
            }
            else
            {
                a = true;
            }
            i++;
        }
        return a;
    }
}
bool Search_file(char ch[255], file tab[100], int rang)
{
    bool a, b;
    int j, i = 0;
    file fich;
    char n;
    if (rang == 0)
    {
        a = true;
    }
    else
    {
        while (i <= rang)
        {
        	fich = tab[i];
        	
            if (fich.name == ch)
            {
                printf("this name exist in the tab");
                a = false;
                break;
            }
            else
            {
                a = true;
            }
            i++;
        }
        return a;
    }
}
void saisie_tab(rep *tab, int n)
{
    int i;
    for (i = 0; i < n + n; i++)
    {
.0+-        scanf("%s", tab[i].name);
    }
    while (!verif(tab->name) && !search(tab->name, tab, i));
}

void help()
{
	printf(" show ""nom_rep"" : afficher le noms des fichier dans le repertoir ""nom_rep");
    printf(" show ""nom_rep"" -o u : afficher le noms des fichier dans le repertoir ""nom_rep en ordre alphabetique croissant");
    printf(" show ""nom_rep"" -o d: afficher le noms des fichier dans le repertoir ""nom_rep en ordre alphabetique decroissant");
	printf(" show ""nom_rep"" -c: afficher le noms des fichier dans le repertoir ""nom_rep qui ne contiennent des lettre majiscules");		
	printf(" move : afficher le noms des fichier dans le repertoir courant");
    printf(" move : affiche le nom de repertoir courant");
	printf(" move ""nom_rep"" : se deplacer dans le repertoire nom_rep");
	printf(" move : affiche le noms des fichier dans le repertoir courant");
	printf(" rename ""ancien_nom_de_fichier"" nouvel_nom_de_fichier: changer le nom de fichier"):
	printf("copy ""nom_fichier"": copier le fichier dans le meme repertoire");
	printf("copy ""nom_fichier" "nom_rep"": copier le fichier dans le meme repertoire dans le repertoire nom_rep s'il n'existe pas");
    printf("copy -r ""nom_fichier" "nom_rep""/-r: copier le fichier dans le meme repertoire dans le repertoire nom_rep");
	
	
}





















