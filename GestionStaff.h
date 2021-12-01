#pragma once
#include"MapStaff.h"
#include"CAD.h"

namespace NS_Comp_Svc																	//Fait parti de nos services
{
	ref class GestionStaff																//Création de notre classe relative à la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapStaff^ oMapStaff;
	public:
		GestionStaff(void);																//Création de notre constructeur
		~GestionStaff();																//Création de notre destructeur
		Data::DataSet^ selectStaff(String^);
		void _deleteStaff(int);
		void updateStaff(int, String^, String^, String^, String^, String^, int);		//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void insertStaff(String^, String^, String^, String^, String^, int);
	};
}