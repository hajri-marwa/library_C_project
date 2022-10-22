#define TAILLE_CHAINE 30
#define EMPRUNTE 0
#define DISPONIBLE 1
#define EN_REPARATION 2
char*Tab_Etat[3]={"EMPRUNTE"," DISPONIBLE","EN_REPARATION"};
struct date
{
    int jour;
    int mois;
    int annee;
};
typedef struct date Date ;

struct livre
{
    int Code;
    char Titre[TAILLE_CHAINE]; 
    char Auteur[TAILLE_CHAINE];
    Date Annee_Publication;
    int Etat;
};
typedef struct livre Livre;

struct abonne
{
    char Nom[TAILLE_CHAINE];
    int id;
    Livre livre;

};
typedef struct abonne Abonne;

//prototype

Date saisir_date();
void menu_principale();
void menu_1();
void menu_2();
void menu_3();
//gestion des livres
int exist_code(Livre*,int,int);
void initialiser_tableau_livre(Livre*,int);
Livre saisir_livre(Livre*,Livre*,int);
void afficher_livre(Livre);
void allocation_livres(Livre**,int);
void remplir_tableau_livres(Livre*,Livre,int);
void afficher_tableau_livres(Livre*,int);
int Chercher_Livre(Livre* ,Livre*,Livre*,int,int);
void Modifier_Titre(Livre*,Livre*,Livre*,int,int);
void Modifier_Auteur(Livre*,Livre*,Livre*,int,int);
void Modifier_Annee_publication(Livre*,Livre*,Livre*,int,int);
void Supprimer_Livre(Livre*,int,int);

//gestion des abonnees
void initialiser_tableau_abonnes(Abonne*,int);
Abonne saisir_abonne(Abonne*,Abonne*,int);
void afficher_abonne(Abonne);
void allocation_abonnes(Abonne**,int);
void remplir_tableau_abonnes(Abonne*,int);
void afficher_tableau_abonnes(Abonne*,int);
void modifier_abonne(Abonne*,int,int);
void Supprimer_abonne(Abonne*,int,int);
void Emprunter_Livre(Abonne*,Livre*,Livre*,Livre*,Abonne,int,int,int,int);
void ajouter_livre_abonne(Abonne*,Livre);
void ajouter_livre_tableau(Livre*,Livre,int);
void Envoyer_Livre_Reparation(Livre*,Livre *,Livre*,int,int);

