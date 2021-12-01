#pragma once
#include "MapStock.h"
#include "CAD.h"

namespace NS_Comp_Svc																		//Fait parti de nos services
{
	ref class GestionStock																	//Cr�ation de notre classe relative � la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapStock^ oMapStock;
	public:
		GestionStock(void);																	//Cr�ation de notre constructeur
		~GestionStock();																	//Cr�ation de notre destructeur
		Data::DataSet^ selectStock(String^);
		void _deleteStock(int);
		void updateStock(int, String^, int, int, int, String^, String^, int, int, int);		//Cr�ation de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre � cette classe
		void insertStock(String^, int, int, int, String^, String^, int, int, int);
	};
}