/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Client
**developpement des prototypes**
-->developpement des getters pour obtention de données entrées par le User--
-->developpement des setters pour modifications des données--
*/																																	
#include <string>
#include<iostream>
#include<ostream>
#include<vector>
#include"Client.h"
#include"Products.h"
#include"Orders.h"


using namespace std;


Client::Client(std::string prenom,std::string nom,int IdU)//constructeur de la classe client
	{
		m_prenom=prenom;
		m_nom=nom;
		m_idU=IdU;
		
	}
std::string Client::getPrenom() const
	{
		return m_prenom;
	}
std::string Client::getNom() const
	{
		return m_nom;
	}
int Client::getIdu() const
	{
		return m_idU;
	}

void Client::AddProducts(Products P)//method permettant d'ajouter un produit

	{
		m_panier.push_back(P);

	}
void Client::DeleteProducts(Products P)//method permettant de supprimer un produits ajouter dans un panier
	{
		m_panier.erase(P);

	}
void Client::ModifiedQte(Products& P1,int NQte)//method qui modifie la quantité d'un article en mettant NQte comme  la nouvelle quantité qu'insere l'utilisateur 

	{
		for(Products P: m_panier)
		{
			int i=0;
			if(P1.getTitle() ==m_panier.at(i).getTitle())
				{
					P1.setQte(NQte);
				}
		}
		
	}

void Client::MonPanier()//method permettant d'afficher la quantité d'articles contenu dans son panier
	{
		for(Products P: m_panier)
		{
			int i=0;
		 	if(m_panier.size() >0)
					{
						int i=0;
						for(Products P :m_panier)
						{
							std::cout<<"Produits"<<i++<<":"<<P.getTitle() <<"  ' "<<P.getDescription() <<"    '( "<<P.getQte()<<" )"<<std::endl;
						}

					}
		

		}
			
	}
void Client::Commander(Products P)//method qui va permettre au client de commander des articles qui sont dans son panier
	{


		for(unsigned long i=0 ;i<m_panier.size()-1;i++)
			{
				if(P.getTitle() !=m_panier.at(i).getTitle())
				{
					cout<<"erreur ,votre article n'est pas dans votre panier"<<endl;
				}
				else
				{

					Orders O(getIdu(),P.getTitle(),"COMMANDE");
					
				}
			}
		
		
	}
void Client::ValidCommand()//method qui va reinitialiser le panier aprés avoir effectué la commande
		{
			
		for(unsigned long i=0 ;i<m_panier.size()-1;i++)
			{
				DeleteProducts(m_panier.at(i));
			}
		
		}


		