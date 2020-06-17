#ifndef Structure
#define Structure
typedef struct file
{
    char name[255];
    char extension[50];
    char content[5000];
    int sup_id;
} file;

typedef struct rep
{
    char name[255];
    file contenu[100];
    int id;
} rep;
#endif // !Structure
