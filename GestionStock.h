#pragma once
#include "MapStock.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class GestionStock
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapStock^ oMapStock;
	public:
		GestionStock(void);
		~GestionStock();
		Data::DataSet^ selectStock(String^);
		void _deleteStock(int);
		void updateStock(int, String^, int, int, int, String^, String^, int, int, int);
		void insertStock(String^, int, int, int, String^, String^, int, int, int);
	};
}