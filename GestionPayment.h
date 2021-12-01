#pragma once
#include"CAD.h"
#include"MapPayment.h"

namespace NS_Comp_Svc															//Fait parti de nos services
{
	ref class GestionPayment													//Création de notre classe relative à la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapPayment^ oMapPayment;
	public:
		GestionPayment(void);													//Création de notre constructeur
		~GestionPayment();														//Création de notre destructeur
		Data::DataSet^ selectPayment(String^);
		void _deletePayment(int);
		void updatePayment(int, String^, String^, int, int, int, int);			//Création de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre à cette classe
		void insertPayment(String^, String^, int, int, int, int);
	};
}