#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapAdress : public Map					//D�claration de notre classe MapAdress qui h�rite de notre class Map
	{
	private:
		int id_adress;
		int number;
		String^ street;									//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		int postal_code;
		String^ city;
		int floor;
	public:
		virtual String^ SELECT(void) override;			
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;
		void setId_adress(int);
		void setNumber(int);
		void setStreet(String^);						//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setPostalCode(int);
		void setCity(String^);
		void setFloor(int);

		int getId_adress(void);
		int getNumber(void);
		String^ getStreet(void);						//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		int getPostalCode(void);
		String^ getCity(void);
		int getFloor(void);
	};
}