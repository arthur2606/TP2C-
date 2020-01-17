/*
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Magasin
**developpement des prototypes**
-->developpement des getters pour obtention de données entrées par le User--
-->developpement des setters pour modifications des données--
*/																																	
#include <string>
#include<iostream>
#include<ostream>
#include <vector>
#include "Magasin.h"
#include"Orders.h"
#include"Client.h"
#include"Products.h"


using namespace std;


		Magasin::Magasin()
		{

		}
		void Magasin::AddClient(Client* client)
		{

			m_clients.push_back(client);

		}
		void Magasin::add_product_to_store(string title ,string description,int Qute,float prix)
		{
			Products p(title,description,Qute,prix);

			m_products.push_back(&p);

		}
		void Magasin::display_products()//afficher la liste des produits
		{
			for(unsigned long i=0 ;i<m_products.size() ;i++)
				{
					 std::cout<<"Produits"<<i<<":"<<m_products.at(i)->getTitle()<<std::endl;
					 cout<<"";
				}
		}
		void Magasin::update_product_quantity(std::string description, int NQte)
		{

			for(unsigned long i=0 ;i<m_products.size() ;i++)
			{
				if(m_products.at(i)->getDescription()==description)
				{
					m_products.at(i)->setQte(NQte);
				}
			}
			
		}

		void Magasin::display_product_updated(std::string description)
		{

			for(unsigned long i=0 ;i<m_products.size() ;i++)
			{
				if(m_products.at(i)->getDescription()==description)
				{
					std::cout<<"Produits"<<i<<":"<<m_products.at(i)->getTitle()<<"  "<<m_products.at(i)->getDescription()<<" ("<<m_products.at(i)->getQte()<<" )"<<m_products.at(i)->getprice()<<std::endl;
				}
			}
			
		}
		void Magasin::display_client(int Num)
		{
			for(unsigned long i=0 ;i<m_products.size() ;i++)
			{
				if(m_clients.at(i)->getIdu()==Num)
				{
					std::cout<<m_clients.at(i)->getPrenom()<<" "<<m_clients.at(i)->getNom()<<" "<<m_clients.at(i)->getIdu()<<std::endl;

					
				}

			}


		}
		void Magasin::add_product_to_client(std::string titleP, std::string name, std::string surname)
		{
			
			for (unsigned long i =0 ;i<m_clients.size();i++)
			{
				if(m_clients.at(i)->getNom()==name && m_clients.at(i)->getPrenom()==surname && m_products.at(i)->getTitle()==titleP)
				{
								
								m_clients.at(i)->AddProducts(m_products.at(i));//le produits correspondant au titre entre par l'utilisateur
					
				}
			}

		}
		void Magasin::add_product_to_client (std::string titleP, int Idu)
		{
			for (unsigned long i =0 ;i<m_clients.size();i++)
			{
				if(m_clients.at(i)->getIdu()==Idu && m_products.at(i)->getTitle()==titleP)
				{
								m_clients.at(i)->AddProducts(m_products.at(i));//le produits correspondant au titre entre par l'utilisateur
				
				}
			}

		}
		void Magasin::add_Orders(Orders* O)
		{
			m_Orders.push_back(O);

		}
		void Magasin::Display_all_Orders()
		{
			for(Orders* O: m_Orders)
				std::cout<<O<<std::endl;


		}
		void Magasin::Orders_of_clients(int Idu)
		{
			for (unsigned long i =0 ;i<m_clients.size();i++)
			{
				if(m_clients.at(i)->getIdu()==Idu)
				{
					m_clients.at(i)->MonPanier();
				}
			}


		}