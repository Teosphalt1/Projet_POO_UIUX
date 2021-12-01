#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapAdress : public Map					//Déclaration de notre classe MapAdress qui hérite de notre class Map
	{
	private:
		int id_adress;
		int number;
		String^ street;									//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		int postal_code;
		String^ city;
		int floor;
	public:
		virtual String^ SELECT(void) override;			
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;
		void setId_adress(int);
		void setNumber(int);
		void setStreet(String^);						//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setPostalCode(int);
		void setCity(String^);
		void setFloor(int);

		int getId_adress(void);
		int getNumber(void);
		String^ getStreet(void);						//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		int getPostalCode(void);
		String^ getCity(void);
		int getFloor(void);
	};
}