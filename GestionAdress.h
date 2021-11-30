#pragma once
#include "MapAdress.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class GestionAdress
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapAdress^ oMapAdress;
	public:
		GestionAdress(void);
		~GestionAdress();
		Data::DataSet^ selectAdress(String^);
		void _deleteAdress(int);
		void updateAdress(int, int, String^, int, String^, int);
		void insertAdress(int, String^, int, String^, int);
	};
}