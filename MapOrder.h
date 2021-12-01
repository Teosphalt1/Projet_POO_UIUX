#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapOrder : public Map						//Déclaration de notre classe MapAdress qui hérite de notre class Map			
	{
	private:
		int id_order;
		String^ reference;
		String^ delivery_date;							//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		String^ order_date;
		int discount;
		int id_client;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_order(int);
		void setReference(String^);
		void setDelivery_date(String^);					//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setOrder_date(String^);
		void setDiscount(int);
		void setId_client(int);

		int getId_order(void);
		String^ getReference(void);
		String^ getDelivery_date(void);					//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		String^ getOrder_date(void);
		int getDiscount(void);
		int getId_client(void);
	};
}