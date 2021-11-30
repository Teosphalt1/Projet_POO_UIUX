#pragma once
#include "MapClients.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class GestionClients
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapClients^ oMapClients;
	public:
		GestionClients(void);
		~GestionClients();
		Data::DataSet^ selectClients(String^);
		void _deleteClients(int);
		void updateClients(int, String^, String^, String^, String^, String^, int, int);
		void insertClients(String^, String^, String^, String^, String^, int, int);
	};
}