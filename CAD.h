#pragma once
#include "pch.h"
namespace NS_Comp_Data
{
	ref class CAD
	{
	private:
		String^ sSql;
		String^ sCnx;
		Data::SqlClient::SqlConnection^ oCnx;
		SqlClient::SqlCommand^ oCmd;
		SqlClient::SqlDataAdapter^ oDA;
		DataSet^ oDs;
	public:
		CAD(void);									//Définition des différentes actions que nous allons réaliser sur notre BDD
		DataSet^ getRows(String^, String^);			//Permet de récupérer les colonnes d'une table
		void actionRows(String^);					//Permet d'insérer des éléments d'une table
		void deleteRows(String^);					//Permet de supprimer des lignes d'une tabele
		void updateRows(String^);					//Permet de modifier les lignes d'une table
	};
}