#pragma once
#include "MapClients.h"
#include "CAD.h"

namespace NS_Comp_Svc																				//Fait parti de nos services
{
	ref class GestionClients																		//Cr�ation de notre classe relative � la gestion des clients
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapClients^ oMapClients;
	public:
		GestionClients(void);																		//Cr�ation de notre constructeur
		~GestionClients();																			//Cr�ation de notre destructeur

		Data::DataSet^ selectClients(String^);
		void _deleteClients(int);
		void updateClients(int, String^, String^, String^, String^, String^, int, int);				//Cr�ation de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre � cette classe
		void insertClients(String^, String^, String^, String^, String^, int, int);
	};
}