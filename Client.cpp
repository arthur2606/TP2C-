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

Client::Client()
{

}
Client::Client(string prenom,string nom,int IdU)//constructeur de la classe client
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
void Client::setPrenom(std::string Prenom)
{
	m_prenom=Prenom;
}
void Client::setNom(std::string Nom)
{
	m_nom=Nom;
}
void Client::setIdu(int ID)
{
	m_idU=ID;
}
void Client::AddProducts(Products* P)//method permettant d'ajouter un produit

	{
		m_panier.push_back(P);
	}

void Client::DeleteProducts(Products *P)//method permettant de supprimer un produits ajouter dans un panier
	{
		for(unsigned long i=0 ;i<m_panier.size();i++)
		{
			if(P->getTitle()==m_panier.at(i)->getTitle())
			{
				m_panier.erase(m_panier.begin()+i);
			}
		}
		

	}
void Client::ModifiedQte(Products *P1,int NQte)//method qui modifie la quantité d'un article en mettant NQte comme  la nouvelle quantité qu'insere l'utilisateur 

	{
		for(unsigned long i=0;i<m_panier.size();i++)
		{
			if(P1->getTitle() ==m_panier.at(i)->getTitle())
				{
					P1->setQte(NQte);
				}
		}
		
	}

void Client::MonPanier()//method permettant d'afficher la quantité d'articles contenu dans son panier
	{
		if(m_panier.size() >0)
		{
			for(unsigned long i=0 ;i<m_panier.size() ;i++)
		{
			std::cout<<"Produits"<<i<<":"<<m_panier.at(i)->getTitle() <<"  ' "<<m_panier.at(i)->getDescription() <<"    '( "<<m_panier.at(i)->getQte()<<" )"<<std::endl;
		}
		}
		
			
	}
void Client::Commander(Products *P)//method qui va permettre au client de commander des articles qui sont dans son panier
	{


		for(unsigned long i=0 ;i<m_panier.size()-1;i++)
			{
				if(P->getTitle() !=m_panier.at(i)->getTitle())
				{
					cout<<"erreur ,votre article n'est pas dans votre panier"<<endl;
				}
				else
				{
					m_orders.push_back(P);
				}
			}
			Client C();
		
		//Orders O(C,m_orders,"Commandé");
	}
void Client::ValidCommand()//method qui va reinitialiser le panier aprés avoir effectué la commande
		{

				m_panier.empty();
	
		
		}


std::ostream &operator << (std::ostream &output,Client& Cl) 
				{  

					if(Cl.m_panier.size() >0)
					{
							output<<"nom :"<<Cl.m_nom<<"prenom : "<<Cl.m_prenom<<"ID : "<<Cl.m_idU<<std::endl;
							return output;
					}
					else
					{
						output<<" erreur"<<std::endl;
						return output;

					}

		    }
