#pragma once
#include"pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapStaff : public Map						//Déclaration de notre classe MapStaff qui hérite de notre class Map
	{
	private:
		int id_staff;
		String^ name_staff;
		String^ last_name_staff;
		String^ hire_date;								//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		String^ name_supervisor;
		String^ last_name_supervisor;
		int id_adress;

	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_staff(int);
		void setName_staff(String^);
		void setLast_name_staff(String^);
		void setHire_date(String^);						//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setName_supervisor(String^);
		void setLast_name_supervisor(String^);
		void setId_adress(int);

		int getId_staff(void);
		String^ getName_staff(void);
		String^ getLast_name_staff(void);
		String^ getHire_date(void);						//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		String^ getName_supervisor(void);
		String^ getLast_name_supervisor(void);
		int getId_adress(void);
	};
}