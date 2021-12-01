#pragma once
#include "MapStock.h"
#include "CAD.h"

namespace NS_Comp_Svc																		//Fait parti de nos services
{
	ref class GestionStock																	//Création de notre classe relative à la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapStock^ oMapStock;
	public:
		GestionStock(void);																	//Création de notre constructeur
		~GestionStock();																	//Création de notre destructeur
		Data::DataSet^ selectStock(String^);
		void _deleteStock(int);
		void updateStock(int, String^, int, int, int, String^, String^, int, int, int);		//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void insertStock(String^, int, int, int, String^, String^, int, int, int);
	};
}