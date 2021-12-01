#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapClients : public Map					//D�claration de notre classe MapClients qui h�rite de notre class Map
	{
	private:
		int id_client;
		String^ name_client;
		String^ last_name_client;
		String^ birth_date;								//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		int postal_code;
		String^ first_purchase_date;
		String^ name_company;
		int id_adress;
		int id_adress_to_bill;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_client(int);
		void setName_client(String^);
		void setLast_name_client(String^);
		void setBirth_date(String^);					//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setFirst_purchase_date(String^);
		void setName_company(String^);
		void setId_adress(int);
		void setId_adress_to_bill(int);

		int getId_client(void);
		String^ getName_client(void);
		String^ getLast_name_client(void);
		String^ getBirth_date(void);					//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		String^ getFirst_purchase_date(void);
		String^ getName_company(void);
		int getId_adress(void);
		int getId_adress_to_bill(void);
	};
}