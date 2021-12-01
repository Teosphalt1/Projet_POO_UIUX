#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapOrder : public Map						//D�claration de notre classe MapAdress qui h�rite de notre class Map			
	{
	private:
		int id_order;
		String^ reference;
		String^ delivery_date;							//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		String^ order_date;
		int discount;
		int id_client;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_order(int);
		void setReference(String^);
		void setDelivery_date(String^);					//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setOrder_date(String^);
		void setDiscount(int);
		void setId_client(int);

		int getId_order(void);
		String^ getReference(void);
		String^ getDelivery_date(void);					//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		String^ getOrder_date(void);
		int getDiscount(void);
		int getId_client(void);
	};
}