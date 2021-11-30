#pragma once
#include"MapToOrder.h"
#include"CAD.h"

namespace NS_Comp_Svc
{
	ref class GestionToOrder
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapToOrder^ oMapToOrder;
	public:
		GestionToOrder(void);
		~GestionToOrder();
		Data::DataSet^ selectToOrder(String^);
		void _deleteToOrder(int, int);
		void updateToOrder(int, int, int);
		void insertToOrder(int, int, int);
	};
}