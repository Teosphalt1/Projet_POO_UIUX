#pragma once
#include "MapClients.h"
#include "CAD.h"

namespace NS_Comp_Svc																				//Fait parti de nos services
{
	ref class GestionClients																		//Création de notre classe relative à la gestion des clients
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapClients^ oMapClients;
	public:
		GestionClients(void);																		//Création de notre constructeur
		~GestionClients();																			//Création de notre destructeur

		Data::DataSet^ selectClients(String^);
		void _deleteClients(int);
		void updateClients(int, String^, String^, String^, String^, String^, int, int);				//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void insertClients(String^, String^, String^, String^, String^, int, int);
	};
}