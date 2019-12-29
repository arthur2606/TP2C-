/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Client
**declaration des prototypes**
-->creation des getters pour obtention de données entrées par le User--
-->creation des setters pour modifications des données--
*/

#ifndef CLIENT_H
#define CLIENT_H																																	
#include <string>
#include<iostream>
#include<ostream>
#include<vector>
#include"Products.h"
#include"Magasin.h"
#include"Orders.h"



class Client{

	public:
		Client(std::string prenom="Emmanuel",std::string nom="BISSE",int IdU=0000);
		std::string getPrenom() const;
		std::string getNom() const;
		int getIdu() const;

		void AddProducts(Products* P); //ajouter produits à mon panier
		void DeleteProducts(Products* P); //Retirer un produits du panier
		void MonPanier(); //display panier
		void ModifiedQte(Products* P1,int NQte);//modifier la quantité du produits 
		void Commander(Products* P); //creer ou une enregistrer une commande 
		void ValidCommand(); // valider la cpommande permettra de reinitialiser le panier du client
		friend std::ostream &operator << (std::ostream &output,Client& Cl) 
				{  
					
					output <<Cl.getPrenom()<<"    "<<Cl.getNom()<<"  "<<Cl.getIdu()<<"   "/*<<Cl.MonPanier()*/<<std::endl; //--mes commandes

					if(Cl.m_panier.size() >0)
					{
						int i;
						for(Products* P :Cl.m_panier)
						{
							output<<"Produits"<<i++<<":"<<P->getTitle() <<"  ' "<<P->getDescription() <<"    '( "<<P->getQte()<<" )"<<endl;
						}

					}


						return output; 

			    }

		


	private:
		std::string m_prenom;
		std::string m_nom;
		int m_idU; // identifiant unique du client 
		std::vector<Products*> m_panier; //
		

		



};
#endif