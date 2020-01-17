/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Products
**declaration des prototypes**
-->creation des getters pour obtention de données entrées par le User--
-->creation des setters pour modifications des données--
*/

#ifndef ORDERS_H
#define ORDERS_H																																	
#include <string>
#include<iostream>
#include<ostream>
#include <vector>

#include"Products.h"

#include"Client.h"



class Orders{

	public:

		Orders(Client client,std::vector<Products*> products,std::string statut);
		void UpdateStatut(std::string Statut); //modifier le statut d'une  commande 
		std::string getStatut() const;
		friend std::ostream &operator << (std::ostream &output,Orders& O);

						
	private:
		Client m_client;
		std::vector<Products*> m_products;
		std::string m_statut;

		
		} ;
		#endif