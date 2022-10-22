#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"mabib.h"

//fonction de saisie de la date 
Date saisir_date()
{
	Date d;
	do
		{
		printf("Donnez le jour:\n");
		scanf("%d",&d.jour);
		if((d.jour<0) || (d.jour>31)) 
		printf("Veuillez introduire une valeur correcte (entre 1 et 31)");
		printf("\n");
		}while((d.jour<0) || (d.jour>31));
		do 
		{
		printf("Donnez le mois:\n");
		scanf("%d",&d.mois);
		if((d.mois<0) || (d.mois>12)) 
		printf("Veuillez introduire une valeur correcte (entre 1 et 12)");
		printf("\n");
		}while((d.mois<0) || (d.mois>12));
		do
		{
		printf("Donnez l'annee:\n");
		scanf("%d",&d.annee);
		if((d.annee<1000) || (d.annee>2020))
		printf("Veuillez introduire une valeur correcte (entre 1700 et 2020)"); 
		printf("\n"); 
		}while((d.annee<1700) || (d.annee>2020));
		return d;
}
//menu principal premiere interface
void menu_principale()
{
		//system("COLOR C");
		printf("\n\n\n\n\n\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tBienVenue dans  la Gestion de la Bibliotheque               \4\n");
		printf("\t\4\t voulez vous :                                              \4\n");
		printf("\t\4\t1-Gerer les Livres                                          \4\n");
		printf("\t\4\t2-Gerer les Abonnes                                         \4\n");
		printf("\t\4\t3-Mise a Jour du bibliotheque                               \4\n");
		printf("\t\4\t4-Quitter                                                   \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tDonnez Votre Choix:                                         \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
}
//menu gestion des livres
void menu_1()
{
	//system("COLOR 9");
		printf("\n\n\n\n\n\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tBienVenue dans la Gestion de la Bibliotheque                \4\n");
		printf("\t\4\t Gestion Livre:                                             \4\n");
		printf("\t\4\t                                                            \4\n");
		printf("\t\4\t1-ajouter un  livre                                         \4\n");
		printf("\t\4\t2-modifier un livre                                         \4\n");
		printf("\t\4\t3-supprimer un livre                                        \4\n");
		printf("\t\4\t4-Rechercher un livre                                       \4\n");
		printf("\t\4\t5-Afficher la liste des livres Disponibles                  \4\n");
		printf("\t\4\t6-Retour  au menu principale                                \4\n");
		printf("\t\4\t7-Quitter                                                   \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tDonnez Votre Choix:                                         \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
}
//menu gestion des abonnes
void menu_2()
{
		//system("COLOR d");
		printf("\n\n\n\n\n\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tBienVenue dans la Gestion de la Bibliotheque                \4\n");
		printf("\t\4\t Gestion des Abonnes:                                       \4\n");
		printf("\t\4\t                                                            \4\n");
		printf("\t\4\t1-Ajouter un  Abonne                                        \4\n");
		printf("\t\4\t2-Modifier un Abonne                                        \4\n");
		printf("\t\4\t3-Supprimer un Abonne                                       \4\n");
		printf("\t\4\t4-Afficher la liste des Abonnes                             \4\n");
		printf("\t\4\t5-Emprunter un livre                                        \4\n");
		printf("\t\4\t6-Retouner au menu principale                               \4\n");
		printf("\t\4\t7-Quitter                                                   \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tDonnez Votre Choix:                                         \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
}
//menu mise a jour bibliothèque
void menu_3()
{
 //system("COLOR a");
 printf("\n\n\n\n\n\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tBienVenue dans la Gestion de la Bibliotheque                \4\n");
		printf("\t\4\t Mise A jour du Bibliotheque :                              \4\n");
		printf("\t\4\t                                                            \4\n");
		printf("\t\4\t1-Afficher la Liste des Livres: \5 EMPRUNTES                \4\n");
		printf("\t\4\t                                \5 DISPONIBLE               \4\n");
		printf("\t\4\t                                \5 EN_REPARATION            \4\n");
		printf("\t\4\t2-Envoyer un Livre au Reparation                            \4\n");
		printf("\t\4\t3-Rendre un livre                                           \4\n");
		printf("\t\4\t4-Retouner au menu principale                               \4\n");
		printf("\t\4\t5-Quitter                                                   \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
		printf("\t\4\tDonnez Votre Choix:                                         \4\n");
		printf("\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
}
/************************************gestion des livres******************************************/
//fonction qui verifie l'unicité d'un code livre 
int exist_code(Livre* L, int n, int code)
{
	int test;
	int i=0;
	while(i<n && ((L+i)->Code) != code)
	i++;
	if(i<n && ((L+i)->Code) == code)
	return i;
	else
	return -1;
}

void initialiser_tableau_livre(Livre*l,int n)
{
 for(int i=0;i<n;i++)
 {
 	((l+i)->Code) = -1;
 }
}
//saisie d'un livre
Livre saisir_livre(Livre* l, Livre* L,int n)
{
		do
		{
		printf("Saisir le code du livre:\n");
		scanf("%d",&l->Code);
		if((exist_code(L,n,l->Code)) != -1)
		{
		printf("Ce code est alloue a un autre livre! un code livre est unique!");
		printf("\n");	
		}
		
		}while((exist_code(L,n,l->Code)) != -1);
		printf("Saisir le titre du Livre:\n");
		scanf("%s",l->Titre);
		printf("Saisir le nom de son auteur:\n");
		scanf("%s",l->Auteur);
		printf("Saisir son Annee de publication:\n");
		l->Annee_Publication=saisir_date();
		l->Etat=1;
		return *l;
}
void allocation_livres(Livre**L,int n)
{
	*L=(Livre*)malloc(n*sizeof(Livre));
	if(!*L)
		exit(-1);
}
/*void remplir_tableau_livres(Livre*L,Livre l,int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" \t__________Saisie du Livre numero %d________\n",i+1);
		(*(L+i)) = saisir_livre(L,&l,n);
	}
}*/
void ajouter_Livre(Livre l,Livre *L,int n)
{
    int i=0;
    while(i<n && ((L+i)->Code) !=-1)
    i++; 
    if(((L+i)->Code) ==-1)
    {
    (*(L+i))=saisir_livre(&l,L,n);
	printf("\n**************Ajout effectuee*************\n");	
    }
	
}
void afficher_livre(Livre L)
{
 int i=L.Etat;
		printf("______________________________________________\n");
		printf("Le Titre de ce Livre est : %s\n",L.Titre);
		printf("Son code est : %d\n",L.Code);
		printf("De l'auteur : %s\n",L.Auteur);
		printf("Il etait publie Le: %d/%d/%d           \n",L.Annee_Publication.jour,L.Annee_Publication.mois,L.Annee_Publication.annee);
		printf("Ce Livre est :%s \n",Tab_Etat[i]);
		printf("_____________________________________________\n");
}
void afficher_tableau_livres(Livre*L,int n)
{
	int i=0;
	while( i<n && ((L+i)->Code) != -1)
	{
		printf("Affichage livre %d:\n",i+1);
		afficher_livre(*(L+i));
		i++;
	}
	if((L->Code) == -1)
	printf("-----Pas de Livres----");
}
int Chercher_Livre(Livre* Disponible ,Livre* Emprunte,Livre* Reparation,int n,int code)
{
	int i=0,j=0,k=0;
	while(i<n && (((Disponible+i))->Code) != code)
	i++;
	if(i<n && (((Disponible+i))->Code) == code)
		return 1;
	else
	{
		while(j<n && (((Emprunte+j))->Code) != code)
		j++;
			if(j<n && (((Emprunte+j))->Code) == code)  
		return 2;
	
	else
	{
				while(k<n && (((Reparation+k))->Code) != code)
				k++;
				if(k<n && (((Reparation+k))->Code) == code)
			return 3;
				else
					return 0;
	}
    }
}

void Modifier_Titre(Livre*Disponible,Livre*Emprunte,Livre*Reparation,int n,int code)
{
	int p;
	p=Chercher_Livre(Disponible,Emprunte,Reparation,n,code);
	 switch(p)
		 {
			case 1 :{
						
				        int i=0;
		                while((i<n) && (Disponible+i)->Code  != code )
			            i++;
						printf("Entrez le Nouveau Titre :\n");
						scanf("%s",(*(Disponible+i)).Titre);
							}
						 break;

			case 2 :{
						int i=0;
		                while((i<n) && (Emprunte+i)->Code  != code )
			            i++;
						 printf("Entrer Le Nouveau Titre :\n");
						 scanf("%s",(*(Emprunte+i)).Titre);
							}
						 break;

			case 3 :{
						int i=0;
		                while((i<n) && (Reparation+i)->Code  != code )
			            i++;
						 printf("Entrer Le Nouveau Titre :\n");
						 scanf("%s",(*(Reparation+i)).Titre);
						 }
						 break;
			default:
						 printf("Erreur !!! \n");
		 }
}
void Modifier_Auteur(Livre*Disponible,Livre*Emprunte,Livre*Reparation,int n,int code)
{
	int p;
	p=Chercher_Livre(Disponible,Emprunte,Reparation,n,code);
	 switch(p)
		 {
			case 1 :{
						int i=0;
		                while((i<n) && (Disponible+i)->Code  != code )
			            i++;
						printf("Entrez le Nouveau Nom d'auteur :\n");
						 scanf("%s",(*(Disponible+i)).Auteur);
							}
						 break;

			case 2 :{
						int i=0;
		                while((i<n) && (Emprunte+i)->Code  != code )
			            i++;
						 printf("Entrer Le Nouveau Nom d'auteur :\n");
						 scanf("%s",(*(Emprunte+i)).Auteur);
							}
						 break;

			case 3 :{
						int i=0;
		                while((i<n) && (Reparation+i)->Code  != code )
			            i++;
						 printf("Entrer Le Nouveau Nom d'auteur:\n");
						 scanf("%s",(*(Reparation+i)).Auteur);
						 }
						 break;
			default:
						 printf("Erreur !!! \n");
		 }
}
void Modifier_Annee_publication(Livre*Disponible,Livre*Emprunte,Livre*Reparation,int n,int code)
{
 	int p;
	Livre l;
	p=Chercher_Livre(Disponible,Emprunte,Reparation,n,code);
	 switch(p)
		 {
			case 1 :{
						int i=0;
		                while((i<n) && (Disponible+i)->Code  != code )
			            i++;
						 printf("Entrer La Nouvelle Date\n");
						 (*(Disponible+i)).Annee_Publication=saisir_date();
							}
						 break;

			case 2 :{
						 int i=0;
		                while((i<n) && (Emprunte+i)->Code  != code )
			            i++;
						 printf("Entrer La Nouvelle Date\n");
						 (*(Emprunte+i)).Annee_Publication=saisir_date();
							}
						 break;

			case 3 :{
						int i=0;
		                while((i<n) && (Reparation+i)->Code  != code )
			            i++;
						(*(Reparation+i)).Annee_Publication=saisir_date();
					}
						 break;
			default:
						 printf("Erreur !!! \n");
		 }
}
void Supprimer_Livre(Livre*l,int n ,int code)
{
	int i=0;
    while((i<n) && (l+i)->Code  != code )
    {
    	i++;
    }
	(l+i)->Code=-1;
   	for(int j=i;j<n-2;j++)
	{
		(*(l+j))=(*(l+j+1));
	}
	n=n-1;
	l=(Livre*)realloc(l,n*sizeof(Livre));
}
/******************************gestion des abonnees******************************************************/
//fonction qui verifie l'unicite de l'identifiant d'un livre
int exist_id(Abonne* A,int n,int ida)
{
	int test;
	int i=0;
	while(i<n && ((A+i)->id) != ida)
	i++;
	if(i<n && ((A+i)->id) == ida)
	return i;
	else
	return -1;
}
void allocation_abonnes(Abonne** a,int n)
{
   *a=(Abonne*)malloc(n*sizeof(Abonne));
	if(!*a)
		exit(-1);
}
void initialiser_tableau_abonnes(Abonne* a,int n)
{
	for(int i=0;i<n;i++)
	{
	((a+i)->id)=-1;
	}
}
Abonne saisir_abonne(Abonne* a,Abonne*A,int n)
{
	    do
		{
		printf("Saisir l'identifiant de l'abonne:\n");
		scanf("%d",&a->id);
		if((exist_id(A,n,a->id)) != -1)
		{
		printf("Cet identifiant est alloue a un autre abonne! un id abonne est unique!");
		printf("\n");	
		}
		
		}while((exist_id(A,n,a->id)) != -1);
	    printf("Donnez le Nom de l'Abonne:\n");
        scanf("%s", a->Nom);
        a->livre.Code=-1;
        return *a;
}
void afficher_abonne(Abonne A)
{
	printf("\t \t____________________________\n");
    printf("\t\tLE NOM :%s\n",A.Nom);
    printf("\t\tL'IDENTIFIANT :%d\n",A.id);
    if(A.livre.Code==-1)
    printf("\t\t\t** Aucun Livre Emprunte **\n");
    else
    printf("\t\t\t** Il a un Livre Emprunte **\n");
    printf("\t\t____________________________\n");
}
void ajouter_abonne(Abonne a, Abonne* A,int n)
{
	int i=0;
    while(i<n && ((A+i)->id) !=-1)
    i++; 
    if(((A+i)->id) ==-1)
    {
    (*(A+i))=saisir_abonne(&a,A,n);
	printf("\n**************Ajout effectuee*************\n");	
    }
	
}

/*void remplir_tableau_abonnes(Abonne* a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" \t__________Saisie du l'abonne numero %d________\n",i+1);
		saisir_abonne(a+i);
	}
}*/
void afficher_tableau_abonnes(Abonne* a,int n)
{
	int i=0;
	while( i<n && ((a+i)->id) != -1)
	{
		printf("Affichage Abonne %d:\n",i+1);
		afficher_abonne(*(a+i));
		i++;
	}
	if((a->id) == -1)
	printf("-----Pas d'abonnes a afficher----");
}
void modifier_abonne(Abonne*a,int n,int ida)
{
	int i=0;
    while((i<n) && (a+i)->id != ida )
    i++;
    if(i<n && (a+i)->id == ida)
    {
    	printf("Entrez le Nouveau Nom de l'abonne :\n");
        scanf("%s",(*(a+i)).Nom);
        printf("\t\t----Modification avec Succes \2\2\2 ---\n");
    }
    else
    { 
    	printf("l'abonne dont l'id %d .. n'existe pas !!\n",ida);
    }
}
void Supprimer_abonne(Abonne*a,int n,int ida)
{
	int i=0;
    while((i<n) && (a+i)->id  != ida )
    {
    	i++;
    }
	if(i<n && (a+i)->id  == ida)
	{

        (a+i)->id =-1;
		for(int j=i;j<n;j++)
	{
		(*(a+j))=(*(a+j+1));
    }
    
	n=n-1;
	a=(Abonne*)realloc(a,n*sizeof(Abonne));
	printf("\t----Suppression avec succes---\n");
    printf("\t\t\2\2\2\2\2\n");
	
	}
	else
	{
		printf("Cet abonne n'existe pas!!\n");
	}
}
void Emprunter_Livre(Abonne*A,Livre*Disponible,Livre*Emprunte,Livre*Reparation,Abonne a,int code, int ida,int n,int nb )
{
	int k;
	k=Chercher_Livre(Disponible,Emprunte,Reparation,n,code);
	int i=0;
	while((i<nb) && (A+i)->id  != ida)
	i++;
	if(i<n && (A+i)->id == ida )
	{
		if(k!=1)
		{
		   printf ("\t----Ce Livre n'Existe Pas Dans Les Livres  DISPONIBLES !!---\n ") ;
		}       
    else
    {
    	if(((A+i)->livre.Code)!=-1)
    	{

           printf("\t\t\t** L'Abonne a deja empunte un Livre  **\n");
    	}
       else
       {
       	int j=0;
	    while((j<n) && (Disponible+j)->Code != code) 
	    	j++;
	    if(j<n && (Disponible+j)->Code == code)
	    {
	    	((Disponible+j))->Etat=0;
	    	
	    	ajouter_livre_abonne((A+i),(*(Disponible+j)));
	    	ajouter_livre_tableau(Emprunte,(*(Disponible+j)),n);
	    	printf("**Livre ajoute aux livre EMPRUNTES**\n" );
	    	Supprimer_Livre(Disponible,n,code);
	    }
       }
    	
    }
	}else
	{
		printf("** Veuillez verifier l'Identifiant de l'abonne! **\n");
	}
}

void ajouter_livre_abonne(Abonne* A,Livre l)
{
	((A->livre))=l;
}
void ajouter_livre_tableau(Livre* L,Livre l,int n)
{
	int i=0;
	while((i<n) && (L+i)->Code !=-1)
		i++;
	(*(L+i))=l;
}
void Envoyer_Livre_Reparation(Livre*Disponible ,Livre*Emprunte,Livre*Reparation ,int code,int n)
{
	int i;
	i=Chercher_Livre(Disponible,Emprunte,Reparation,n,code);
	if(i==0)
	printf("\t----Ce Livre n' Existe pas !--- \n");
	if(i==3)
    printf("\t----Ce Livre Existe Deja dans la liste de Reparation--- \n");
	else
	{
       	int j=0;
	    while((j<n) && (Disponible+j)->Code != code) 
	    	j++;
	    if(j<n && (Disponible+j)->Code == code)
	    {
	    	((Disponible+j))->Etat=2;
	    	ajouter_livre_tableau(Reparation,(*(Disponible+j)),n);
	    	printf("\t---- Envoi Avec Succes---\n");
            printf("\t\t----\2\2\2---\n");
	    	Supprimer_Livre(Disponible,n,code);
	    	printf("\t---- Livre supprime de Livres DISPONIBLES---\n");
            printf("\t\t----\2\2\2---\n");

	    }
	    int k=0;
	    while((k<n) && (Emprunte+k)->Code != code) 
	    	k++;
	    if(k<n && (Emprunte+k)->Code == code)
	    {
	    	((Emprunte+k))->Etat=2;
	    	ajouter_livre_tableau(Reparation,(*(Emprunte+k)),n);
	    	//ajouter_livre_tableau(Reparation,(*(Disponible+j)),n);
	    	printf("\t---- Envoi Avec Succes---\n");
            printf("\t\t----\2\2\2---\n");
	    	Supprimer_Livre(Emprunte,n,code);
	    	printf("\t---- Livre supprime de Livre DISPONIBLES---\n");
            printf("\t\t----\2\2\2---\n");
	    }
    }
}

void Rendre_Livre(Abonne*A ,Livre* Disponible,Livre* Emprunte,Livre* Reparation,int code,int n, int ida)
{
	int i;
	i=Chercher_Livre(Disponible,Emprunte,Reparation,n,code);
	printf("%d",i);
	if(i==0)
	printf("\t----Ce Livre n'Existe pas !--- \n");
    if(i==2)
    {
    	int j=0;
	    while((j<n) && (Emprunte+j)->Code != code) 
	    	j++;
	    if(j<n && (Emprunte+j)->Code == code)
	    {
	    	((Emprunte+j))->Etat=1;
	    	ajouter_livre_tableau(Disponible,(*(Emprunte+j)),n);
	    	printf("\t---- Rendu A la Liste Disponible Avec Succes---\n");
            printf("\t\t\t----\2\2\2---\n");
	    	Supprimer_Livre(Emprunte,n,code);
	    	printf("\t---- Livre supprime de Livres EMPRUNTES---\n");
            printf("\t\t----\2\2\2---\n");
            int k=0;
            while(k<n && ((A+k)->id) != ida)
            	k++;
            if(k<n && ((A+k)->id) == ida)
            {
            	((A+k)->livre).Code=-1;
            }

	    }
	    
    }else
    {
    	printf("**Ce Livre n'est pas emprunte**\n");
    }
    
}




