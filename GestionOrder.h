#pragma once
#include"CAD.h"
#include"MapOrder.h"

namespace NS_Comp_Svc
{
	ref class GestionOrder
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapOrder^ oMapOrder;
	public:
		GestionOrder(void);
		~GestionOrder();
		Data::DataSet^ selectOrder(String^);
		void _deleteOrder(int);
		void updateOrder(int, String^, String^, String^, int, int);
		void insertOrder(String^, String^, String^, int, int);
	};
}