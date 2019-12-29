/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Products
**developpement des prototypes**
-->developpement des getters pour obtention de données entrées par le User--
-->developpement des setters pour modifications des données--
*/																																	
#include <string>
#include<iostream>
#include<ostream>
#include"Products.h"
#include"Magasin.h"
#include"Orders.h"
#include"Client.h"
#include <vector>



using namespace std;


		Products::Products(std::string title,std::string description,int Qte,float price)
		{
			m_title=title;
		 	m_description=description;
			m_Qte=Qte;
			m_priceU=price;

		}
		
		void Products::setQte(int Q)
		{
			m_Qte=Q;
		}
		std::string Products::getTitle() const
		{
			return m_title;

		}
		std::string Products::getDescription() const
		{
			return m_description;
		}
		int Products::getQte() const
		{
			return m_Qte;
		}
		float Products::getprice() const
		{
			return m_priceU;
		}

		

		