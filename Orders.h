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
#include"Client.h"
#include"Products.h"




class Orders{

	public:
		
		Orders(Client client,Products products,std::string statut);
		void UpdateStatut(Orders O,std::string Statut); //modifier le statut d'une  commande 
		std::string getStatut();
		friend std::ostream &operator << (std::ostream &output,Orders& O) ;
				



		


	private:
		Client m_client;
		Products m_products;
		std::string m_statut;
		



} ;
#endif