#pragma once
#include"CAD.h"
#include"MapPayment.h"

namespace NS_Comp_Svc															//Fait parti de nos services
{
	ref class GestionPayment													//Cr�ation de notre classe relative � la gestion des adresses
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapPayment^ oMapPayment;
	public:
		GestionPayment(void);													//Cr�ation de notre constructeur
		~GestionPayment();														//Cr�ation de notre destructeur
		Data::DataSet^ selectPayment(String^);
		void _deletePayment(int);
		void updatePayment(int, String^, String^, int, int, int, int);			//Cr�ation de nos fonctions permettant de modifier ou consulter les tables de notre BDD propre � cette classe
		void insertPayment(String^, String^, int, int, int, int);
	};
}