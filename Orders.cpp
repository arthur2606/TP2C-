/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Orders
**declaration des prototypes**
-->creation des getters pour obtention de données entrées par le User--
-->creation des setters pour modifications des données--
*/
																															
#include <string>
#include<iostream>
#include<ostream>
#include <vector>
#include"Magasin.h"
#include"Client.h"
#include"Products.h"
#include"Orders.h"

using namespace std;




		Orders::Orders(Client client,Products products,std::string statut)
		{
			m_client=client;
			m_products=products;
			m_statut=statut;
			

		}
		std::string Orders::getStatut()
		{
			return m_statut;
		}
		
		void Orders::UpdateStatut(Orders O,std::string NewStatut)
		{
			O.m_statut=NewStatut;

		}
		friend std::ostream &operator << (std::ostream &output,Orders& O) 
				{  
					output <<O.m_client->getPrenom()<<"  "<<O.m_client->getNom()<<"    "<<O.m_products->getTitle()<<"  "<<O.m_statut <<"   "<<std::endl; 
					return output; 

			    }