#pragma once
#include"CAD.h"
#include"MapOrder.h"

namespace NS_Comp_Svc																//Fait parti de nos services
{
	ref class GestionOrder															//Création de notre classe relative à la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapOrder^ oMapOrder;
	public:
		GestionOrder(void);															//Création de notre constructeur
		~GestionOrder();															//Création de notre destructeur

		Data::DataSet^ selectOrder(String^);
		void _deleteOrder(int);														//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void updateOrder(int, String^, String^, String^, int, int);
		void insertOrder(String^, String^, String^, int, int);
	};
}