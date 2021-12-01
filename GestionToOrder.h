#pragma once
#include"MapToOrder.h"
#include"CAD.h"

namespace NS_Comp_Svc															//Fait parti de nos services
{
	ref class GestionToOrder													//Cr�ation de notre classe relative � la gestion des prduits dans les commandes
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapToOrder^ oMapToOrder;
	public:
		GestionToOrder(void);													//Cr�ation de notre constructeur
		~GestionToOrder();														//Cr�ation de notre destructeur

		Data::DataSet^ selectToOrder(String^);
		void _deleteToOrder(int, int);											//Cr�ation de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre � cette classe
		void updateToOrder(int, int, int);
		void insertToOrder(int, int, int);
	};
}