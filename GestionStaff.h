#pragma once
#include"MapStaff.h"
#include"CAD.h"

namespace NS_Comp_Svc
{
	ref class GestionStaff
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapStaff^ oMapStaff;
	public:
		GestionStaff(void);
		~GestionStaff();
		Data::DataSet^ selectStaff(String^);
		void _deleteStaff(int);
		void updateStaff(int, String^, String^, String^, String^, String^, int);
		void insertStaff(String^, String^, String^, String^, String^, int);
	};
}