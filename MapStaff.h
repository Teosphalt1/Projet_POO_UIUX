#pragma once
#include"pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapStaff : public Map						//D�claration de notre classe MapStaff qui h�rite de notre class Map
	{
	private:
		int id_staff;
		String^ name_staff;
		String^ last_name_staff;
		String^ hire_date;								//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		String^ name_supervisor;
		String^ last_name_supervisor;
		int id_adress;

	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_staff(int);
		void setName_staff(String^);
		void setLast_name_staff(String^);
		void setHire_date(String^);						//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setName_supervisor(String^);
		void setLast_name_supervisor(String^);
		void setId_adress(int);

		int getId_staff(void);
		String^ getName_staff(void);
		String^ getLast_name_staff(void);
		String^ getHire_date(void);						//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		String^ getName_supervisor(void);
		String^ getLast_name_supervisor(void);
		int getId_adress(void);
	};
}