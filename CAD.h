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
		CAD(void);									//D�finition des diff�rentes actions que nous allons r�aliser sur notre BDD
		DataSet^ getRows(String^, String^);			//Permet de r�cup�rer les colonnes d'une table
		void actionRows(String^);					//Permet d'ins�rer des �l�ments d'une table
		void deleteRows(String^);					//Permet de supprimer des lignes d'une tabele
		void updateRows(String^);					//Permet de modifier les lignes d'une table
	};
}