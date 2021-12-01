#pragma once
#include"pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage	
{
	ref class MapToOrder : public Map					//Déclaration de notre classe MapRoOrder qui hérite de notre class Map
	{
	private:
		int quantity;
		int id_product;									//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		int id_order;

	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setQuantity(int);
		void setId_product(int);						//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setId_order(int);

		int getQuantity(void);
		int getId_product(void);						//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		int getId_order(void);
	};
}