#pragma once
#include "MapAdress.h"
#include "CAD.h"

namespace NS_Comp_Svc															//Fait parti de nos services
{
	ref class GestionAdress														//Cr�ation de notre classe relative � la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapAdress^ oMapAdress;
	public:
		GestionAdress(void);													//Cr�ation de notre constructeur
		~GestionAdress();														//Cr�ation de notre destructeur

		Data::DataSet^ selectAdress(String^);
		void _deleteAdress(int);												//Cr�ation de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre � cette classe
		void updateAdress(int, int, String^, int, String^, int);
		void insertAdress(int, String^, int, String^, int);
	};
}