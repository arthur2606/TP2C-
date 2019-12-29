/*		
Author=ing BISSE SOWE Emmanuel Arthur --*
Class-Name=Magasin
**declaration des prototypes**
-->creation des getters pour obtention de données entrées par le User--
-->creation des setters pour modifications des données--
*/

#ifndef MAGASIN_H
#define MAGASIN_H																																	
#include <string>
#include<iostream>
#include<ostream>
#include <vector>
#include"Orders.h"
#include"Client.h"
#include"Products.h"




class Magasin{

	public:
		Magasin();
		void AddClient(Client& client);
		void add_product_to_store(std::string title ,std::string description,int Qute,float prix);//ajouter un produits a la liste des produits
		void display_products();//affcher tous les produits
		void update_product_quantity(std::string description, int NQte);
		void display_productupdated(std::string description);//afficher un produits modifié
		void display_client(int Num);//afficher un client selectionné par son nom ou par son IdU
		void add_product_to_client(std::string titleP, std::string name, std::string surname);//ajouter un produit à un client via son nom
		void add_product_to_client(std::string titleP, int Idu);//ajouter un produit à un client via son idU
		void Display_all_Orders();//affiche toutes les commandes passées par tous les clients 
		void Orders_of_clients(int Idu);//affiche les commandes passées par un client
		void add_Orders(Orders* O);



		


	private:
		std::vector<Products*> m_products;//tableau de l'ensemble des produits
		std::vector<Client*> m_clients;//un tableau de l'ensemble des clients
		std::vector<Orders*> m_Orders;//un tableau de l'ensemble des commandes effectuées par les clients
		



} ;
#endif