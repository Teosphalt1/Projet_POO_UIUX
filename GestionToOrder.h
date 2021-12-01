#pragma once
#include"MapToOrder.h"
#include"CAD.h"

namespace NS_Comp_Svc															//Fait parti de nos services
{
	ref class GestionToOrder													//Création de notre classe relative à la gestion des prduits dans les commandes
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapToOrder^ oMapToOrder;
	public:
		GestionToOrder(void);													//Création de notre constructeur
		~GestionToOrder();														//Création de notre destructeur

		Data::DataSet^ selectToOrder(String^);
		void _deleteToOrder(int, int);											//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void updateToOrder(int, int, int);
		void insertToOrder(int, int, int);
	};
}