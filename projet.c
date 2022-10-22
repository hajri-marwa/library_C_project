#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 30
#include"mabib.c"

void main()
{
  int choix,choix1,choix2,choix3,choice,n,nb,i,c,code,cd,id,champ,x,anne,m,ch;
  char titre;
  char* rep;
	Livre *Disponible,*Emprunte,*En_Reparation,l;
	Abonne *A,a;
  allocation_livres(&Disponible,MAX);
  allocation_livres(&Emprunte,MAX);
  allocation_livres(&En_Reparation,MAX);
  allocation_abonnes(&A,MAX);
  initialiser_tableau_livre(Disponible,MAX);
  initialiser_tableau_livre(En_Reparation,MAX);
  initialiser_tableau_livre(Emprunte,MAX);
  initialiser_tableau_abonnes(A,MAX);
	menu_principale();
  do
  {
    scanf("%d",&choix);
    if((choix!=1) && (choix!=2) && (choix!=3) && (choix!=4))
    printf("choix invalide\n");
  }while((choix<0)||((choix!=1)&&(choix!=2) && (choix!=3) && (choix!=4)));
    do
     {
    switch(choix)
         {
             case 1:
             { system("cls");
               menu_1();
               do
               {
                scanf("%d",&choix1);
                if((choix1<0)||((choix!=1)&&(choix!=2) && (choix!=3) && (choix!=4) && (choix!=5) && (choix!=6) && (choix!=7)))
                printf("choix invalide\n");
                printf("\n");
               }while((choix1<0)||((choix!=1)&&(choix!=2) && (choix!=3) && (choix!=4) && (choix!=5) && (choix!=6) && (choix!=7)));
               

            switch(choix1)
                 {
                  case 1:
                     { 
                       system("cls");
                       ajouter_Livre(l,Disponible,MAX);
                       
                       getch();
                       system("cls");
                       menu_1();
                      }break;
                      case 2:
                     {
                       system("cls");
                       printf("Donner le Code du Livre a Modifier :\n");
                       scanf("%d",&code);
                       c=Chercher_Livre(Disponible,Emprunte,En_Reparation,MAX,code);

                       if(c!=0)
                       {
                       printf("Choisir le Champ de Modification :\n");
                       printf("1:Le Titre\n2:Auteur\n3:Annee De Publication\n");
                       scanf("%d",&champ);
                       if(champ==1)
                       {
                       	Modifier_Titre(Disponible,Emprunte,En_Reparation,MAX,code);
                        printf("\t----Modification effectuée--------\n");
                       }
                       
                       if(champ==2)
                       {
                       	Modifier_Auteur(Disponible,Emprunte,En_Reparation,MAX,code);
                        printf("\t----Modification effectuée--------\n");
                       }
                       
                       if(champ==3)
                       {
                       	Modifier_Annee_publication(Disponible,Emprunte,En_Reparation,MAX,code);
                        printf("\t----Modification effectuée--------\n");
                       }
                       
                       }

                       else
                       printf("--Ce Code de Livre n'existe Pas !--\n");
                       getch();
                       system("cls");
                       menu_1();
                      }break;
                    
                      case 3:
                      {
                      printf("Donnez Le Code Du Livre Que Vous Voulez Le supprimer: \n");
                      scanf ("%d",&code);
                      x=Chercher_Livre(Disponible,Emprunte,En_Reparation,MAX,code);
                      if(x==1)
                      {
                      Supprimer_Livre(Disponible,MAX,code);
                      printf("\t----Suppression avec succes---\n");
                      printf("\t\t\2\2\2\2\2\n");
                      }
                      if(x==2)
                      {
                      Supprimer_Livre(Emprunte,MAX,code);
                      printf("\t----Suppression avec succes---\n");
                      printf("\t\t\2\2\2\2\2\n");
                      }
                      if(x==3)
                      {
                      Supprimer_Livre(En_Reparation,MAX,code);
                      printf("\t----Suppression avec succes---\n");
                      printf("\t\t\2\2\2\2\2\n");
                      }
                      else
                      printf("--Ce Code de Livre n'existe Pas !--\n");
                      getch();
                      menu_1();

                       }break;
                  case 4:
                      {
                       printf("Donner Le Code Du Livre A Chercher :\n");
                       scanf("%d",&cd);
                       m=Chercher_Livre(Disponible,Emprunte,En_Reparation,MAX,cd);
                       if(m==1)
                       printf("\t** Le Livre Du Code %d EXISTE Dans Les Livres DISPONIBLES .\n",cd);
                       if(m==2)
                       printf("\t** Le Livre Du Code %d EXISTE Dans Les Livres EMPRUNTES .\n",cd);
                       if(m==3)
                       printf("\t** Le Livre Du Code %d EXISTE Dans Les Livres EN_REPARATION .\n",cd);
                       if(m==0)
                       printf("\t----Verifier Le Code Donnee !!!--- \n");
                       getch();
                       system("cls");
                       menu_1();
                      }break;
                  case 5:
                      {
                        system("cls");
                        afficher_tableau_livres(Disponible,MAX);
                        getch();
                        menu_1();
                      }break;
                  case 6:
                      { system("cls");
                        menu_principale();
                        do
                        {
                        scanf("%d",&choix);
                        if((choix!=1) && (choix!=2) && (choix!=3) && (choix!=4))
                        printf("choix invalide\n");
                        printf("\n");
                        }while((choix<0)||((choix!=1)&&(choix!=2) && (choix!=3) && (choix!=4)));
                        getch();
                      }break;
                  case 7:
                      { 
                      system("cls");
                      //system("COLOR E");
                      printf("\n\n\n\n\n\n\n\n\n");
                      printf("\t\t\t*******APPLICATION TERMINEE*******\n");
                      printf("\t\t\t  ****   A BIENTOT \1\1   *****\n");
                      printf("\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7");
                      getch();
                      }break;
                     }

             }break;
            case 2:
             {
               system("cls");
               menu_2();
               do
               {
                scanf("%d",&choix2);
                if((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)))
                  printf("Choix invalide!");
                  printf("\n");
               }while((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)));
               
               switch(choix2)
               {
                   case 1:{
                   system("cls");
                   ajouter_abonne(a,A,MAX);
                   getch();
                   menu_2();
                  /* do
                     {
                      scanf("%d",&choix2);
                      if((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)))
                        printf("Choix invalide!");
                        printf("\n");
                     }while((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)));*/

                          }break;
                   case 2:{
                    system("cls");
                    printf("Donner l'Identifiant de l'Abonne A Modifier :\n");
                    scanf("%d",&id);
                    modifier_abonne(A,MAX,id);
                    
                    getch();
                    menu_2();


                          }break;
                   case 3:{
                   system("cls");
                   printf("Donner l'Identifiant de l'Abonne A Supprimer :\n");
                   scanf("%d",&x);
                   Supprimer_abonne(A,MAX,x);
                   
                   getch();
                   menu_2();
                 /*  do
                     {
                      scanf("%d",&choix2);
                      if((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)))
                        printf("Choix invalide!");
                        printf("\n");
                     }while((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)));*/
                          }break;
                   case 4:{
                       system("cls");
                       printf("\n\n\n\n");
                       printf("\t_______LA LISTE DES ABONNEES EST :_______\n\n\n");
                       afficher_tableau_abonnes(A,MAX);
                       getch();
                       menu_2();

                          }break;
                    case 5:{
                           printf("Donner Le Code Du Livre A Emprunter :\n");
                           scanf("%d",&x);
                           printf("Donner l'Identifiant de l'Abonne :\n");
                           scanf("%d",&id);
                           Emprunter_Livre(A,Disponible,Emprunte,En_Reparation,*A,x,id,MAX,MAX);

                           getch();
                           menu_2();
                          /* do
                           {
                            scanf("%d",&choix2);
                            if((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)))
                              printf("Choix invalide!");
                              printf("\n");
                           }while((choix2<0)||((choix2!=1)&&(choix2!=2) && (choix2!=3) && (choix2!=4) && (choix2!=5) && (choix2!=6) && (choix2!=7)));*/
                           }break;
                    case 6:{
                        system("cls");
                        menu_principale();
                        do
                         {
                         scanf("%d",&choix);
                         if((choix!=1) && (choix!=2) && (choix!=3) && (choix!=4))
                         printf("choix invalide\n");
                          }while((choix<0)||((choix!=1)&&(choix!=2) && (choix!=3) && (choix!=4)));
                        getch();
                           }break;
                    case 7:{
                      system("cls");
                      //system("COLOR E");
                      printf("\n\n\n\n\n\n\n\n\n");
                      printf("\t\t\t*******APPLICATION TERMINEE*******\n");
                      printf("\t\t\t  ****   A BIENTOT \1\1   *****\n");
                      printf("\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7");
                      getch();
                           }break;



              }


                 }break;

                case 3:{
                       system("cls");
                       menu_3();
                       do
                       {
                        scanf("%d",&choix3);
                        if((choix3<0)||((choix3!=1)&&(choix3!=2) && (choix3!=3) && (choix3!=4) && (choix3!=5)))
                        printf("Choix invalide!");
                        printf("\n");
                       }while((choix3<0)||((choix3!=1)&&(choix3!=2) && (choix3!=3) && (choix3!=4) && (choix3!=5)));
                       

                       switch(choix3)
                       {
                           case 1:{
                                  system("cls");
                                  printf("Choisir la Liste de Livres que Vous Voulez Afficher:\n");
                                  printf("\t\6         Disponible     1\n");
                                  printf("\t\6\6        Emprunter      2\n");
                                  printf("\t\6\6\6       En_Reparation  3\n");
                                  scanf("%d",&ch);
                                  if(ch==1)
                                  afficher_tableau_livres(Disponible,MAX);
                                  if(ch==2)
                                  afficher_tableau_livres(Emprunte,MAX);
                                  if(ch==3)
                                  afficher_tableau_livres(En_Reparation,MAX);

                                  getch();
                                  menu_3();
                                  /*do
                                   {
                                    scanf("%d",&choix3);
                                    if((choix3<0)||((choix3!=1)&&(choix3!=2) && (choix3!=3) && (choix3!=4) && (choix3!=5)))
                                    printf("Choix invalide!");
                                    printf("\n");
                                   }while((choix3<0)||((choix3!=1)&&(choix3!=2) && (choix3!=3) && (choix3!=4) && (choix3!=5)));*/
                                  }break;

                           case 2:{
                                  system("cls");
                                  printf("Donnez le Code du livre  que vous voulez Envoyer Au Reparation :\n");
                                  scanf("%d",&x);
                                  Envoyer_Livre_Reparation(Disponible ,Emprunte,En_Reparation ,x,MAX);
                                  getch();
                                  menu_3();
                                  /*{
                                    scanf("%d",&choix3);
                                    if((choix3<0)||((choix3!=1)&&(choix3!=2) && (choix3!=3) && (choix3!=4) && (choix3!=5)))
                                    printf("Choix invalide!");
                                    printf("\n");
                                   }while((choix3<0)||((choix3!=1)&&(choix3!=2) && (choix3!=3) && (choix3!=4) && (choix3!=5)));*/

                                  }break;
                           case 3:{
                                  system("cls");
                                  printf("Donner le Code du Livre a Rendre :\n");
                                  scanf("%d",&x);
                                  printf("Donner l'identifiant de l'abonne :\n");
                                  scanf("%d",&n);
                                  Rendre_Livre(A,Disponible,Emprunte,En_Reparation,x,MAX,n);
                                  
                                  getch();
                                  menu_3();
                                  }break;
                           case 4:{
                                 system("cls");
                                 menu_principale();
                                 do
                                  {
                                    scanf("%d",&choix);
                                    if((choix!=1) && (choix!=2) && (choix!=3) && (choix!=4))
                                    printf("choix invalide\n");
                                  }while((choix<0)||((choix!=1)&&(choix!=2) && (choix!=3) && (choix!=4)));
                                 getch();
                                }break;
                           case 5:{
                                 system("cls");
                                //system("COLOR E");
                                 printf("\n\n\n\n\n\n\n\n\n");
                                 printf("\t\t\t*******APPLICATION TERMINEE*******\n");
                                 printf("\t\t\t  ****   A BIENTOT \1\1   *****\n");
                                 printf("\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7");
                                 getch();
                              }break;
                              
                       }


                       }break;
                case 4:{
                            system("cls");
                            //system("COLOR E");
                            printf("\n\n\n\n\n\n\n\n\n");
                            printf("\t\t\t*******APPLICATION TERMINEE*******\n");
                            printf("\t\t\t  ****   A BIENTOT \1\1   *****\n");
                            printf("\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7\7");
                           getch();
                       }break;
                       
                
              }
            }while(choix!=4 && choix1!=7 &&choix2!=7 &&choix3!=6);
    
  
    getch();
}