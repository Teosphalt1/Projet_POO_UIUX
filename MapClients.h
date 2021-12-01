#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapClients : public Map					//Déclaration de notre classe MapClients qui hérite de notre class Map
	{
	private:
		int id_client;
		String^ name_client;
		String^ last_name_client;
		String^ birth_date;								//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		int postal_code;
		String^ first_purchase_date;
		String^ name_company;
		int id_adress;
		int id_adress_to_bill;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_client(int);
		void setName_client(String^);
		void setLast_name_client(String^);
		void setBirth_date(String^);					//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setFirst_purchase_date(String^);
		void setName_company(String^);
		void setId_adress(int);
		void setId_adress_to_bill(int);

		int getId_client(void);
		String^ getName_client(void);
		String^ getLast_name_client(void);
		String^ getBirth_date(void);					//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		String^ getFirst_purchase_date(void);
		String^ getName_company(void);
		int getId_adress(void);
		int getId_adress_to_bill(void);
	};
}