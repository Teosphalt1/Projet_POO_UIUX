#pragma once
#include "pch.h"
//test nicolas je vais le supprimer
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
		CAD(void);
		DataSet^ getRows(String^, String^);
		void actionRows(String^);
		void deleteRows(String^);
		void updateRows(String^);
	};
}