#pragma once
#include"CAD.h"
#include"MapPayment.h"

namespace NS_Comp_Svc
{
	ref class GestionPayment
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapPayment^ oMapPayment;
	public:
		GestionPayment(void);
		~GestionPayment();
		Data::DataSet^ selectPayment(String^);
		void _deletePayment(int);
		void updatePayment(int, String^, String^, int, int, int, int);
		void insertPayment(String^, String^, int, int, int, int);
	};
}