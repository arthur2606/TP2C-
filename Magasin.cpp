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

		void Magasin::add_product_to_store(std::string title ,std::string description,int Qute,float prix)
		{
			Products p(title ,description,Qute,prix) ;

			m_products.push_back(&p);

		}
		void Magasin::display_products()//afficher la liste des produits
		{
			std::vector<Products*> m_products;
			for(Products* P: m_products)
				{
					int i=0;
					 std::cout<<"Produits"<<i++<<":"<<P->getTitle()<<endl;
					 cout<<"";
				}
		}
		void Magasin::update_product_quantity(std::string description, int NQte)
		{

			for(Products* P: m_products)
			{
				if(P->getDescription()==description)
				{
					P->setQte(NQte);
				}
			}
			
		}

		void Magasin::display_productupdated(std::string description)
		{

			for(Products* P: m_products)
			{
				if(P->getDescription()==description)
				{
					int i=0;
					std::cout<<"Produits"<<i++<<":"<<P->getTitle()<<"  "<<P->getDescription()<<" ("<<P->getQte()<<" )"<<P->getprice()<<endl;
				}
			}
			
		}
		void Magasin::display_client(int Num)
		{
			for(Client* Cl: m_clients)
			{
				if(Cl->getIdu()==Num)
				{
					std::cout<<Cl->getPrenom()<<" "<<Cl->getNom()<<" "<<Cl->getIdu()<<endl;

					
				}

			}


		}
		void Magasin::add_product_to_client(std::string titleP, std::string name, std::string surname)
		{
			
			for (Client* Cl :m_clients)
			{
				if(Cl->getNom()==name && Cl->getPrenom()==surname)
				{
					for(Products* P: m_products)
						{
							if(P->getTitle()==titleP)
							{
								
								Cl->AddProducts(&P);//le produits correspondant au titre entre par l'utilisateur
							}
						}
					
				}
			}

		}
		void Magasin::add_product_to_client (std::string titleP, int Idu)
		{
			for (Client* Cl : m_clients)
			{
				if(Cl->getIdu()==Idu)
				{
					for(Products* P: m_products)
						{
							if(P->getTitle()==titleP)
							{
								Cl->AddProducts(&P);//le produits correspondant au titre entre par l'utilisateur
							}
						}
				
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
				std::cout<<O;


		}
		void Magasin::Orders_of_clients(int Idu)
		{
			for (Client* Cl :m_clients)
			{
				if(Cl->getIdu()==Idu)
				{
					Cl->MonPanier();
				}
			}


		}
