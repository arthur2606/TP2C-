/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Products
**declaration des prototypes**
-->creation des getters pour obtention de données entrées par le User--
-->creation des setters pour modifications des données--
*/

#ifndef PRODUCTS_H
#define PRODUCTS_H																																	
#include <string>
#include<iostream>
#include<ostream>
#include <vector>
#include"Client.h"







class Products{

	public:
		Products(std::string title="PS4",std::string description="Console de jeu de marque Sony",int Qte=2,float price=0.0);
		std::string getTitle() const;
		std::string getDescription() const;
		int getQte() const;
		float getprice() const;
		void setQte(int Q);
		
		friend std::ostream &operator << (std::ostream &output,Products& P);
				
		




		


	private:
		std::string m_title;
		std::string m_description;
		int m_Qte;
		float m_priceU;
		 



} ;
#endif