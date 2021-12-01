#pragma once
#include"pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage	
{
	ref class MapToOrder : public Map					//D�claration de notre classe MapRoOrder qui h�rite de notre class Map
	{
	private:
		int quantity;
		int id_product;									//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		int id_order;

	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setQuantity(int);
		void setId_product(int);						//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setId_order(int);

		int getQuantity(void);
		int getId_product(void);						//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		int getId_order(void);
	};
}