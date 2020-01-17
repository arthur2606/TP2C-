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
#include"Client.h"
#include"Products.h"
#include"Orders.h"

using namespace std;



		
		Orders::Orders(Client client,std::vector<Products*> products,std::string statut)
		{
			
			m_client=client;
			for(unsigned long i=0;i<products.size();i++)
			{
				m_products.at(i)=products.at(i);
			}
			m_statut=statut;
			

		}
		std::string Orders::getStatut() const
		{
			return m_statut;
		}
		
		void Orders::UpdateStatut(std::string NewStatut)
		{
			m_statut=NewStatut;

		}
		std::ostream &operator << (std::ostream &output,Orders& O) 
				{  
					output <<O.m_client->getPrenom()<<"  "<<O.m_client->getNom()<<"    "<<O.m_products->getTitle()<<"  "<<O.m_statut <<"   "<<std::endl; 
					return output; 

			    }
