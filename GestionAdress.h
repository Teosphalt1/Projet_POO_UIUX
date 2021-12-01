#pragma once
#include "MapAdress.h"
#include "CAD.h"

namespace NS_Comp_Svc															//Fait parti de nos services
{
	ref class GestionAdress														//Création de notre classe relative à la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapAdress^ oMapAdress;
	public:
		GestionAdress(void);													//Création de notre constructeur
		~GestionAdress();														//Création de notre destructeur

		Data::DataSet^ selectAdress(String^);
		void _deleteAdress(int);												//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void updateAdress(int, int, String^, int, String^, int);
		void insertAdress(int, String^, int, String^, int);
	};
}