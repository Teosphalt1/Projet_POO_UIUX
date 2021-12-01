#pragma once
#include"CAD.h"
#include"MapStat.h"

namespace NS_Comp_Svc
{
	ref class GestionStat
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapStat^ oMapStat;
	public:
		GestionStat(void);
		Data::DataSet^ stat1(String^);
		Data::DataSet^ stat2(String^);
		Data::DataSet^ stat3(String^);
		Data::DataSet^ stat4(String^);
		Data::DataSet^ stat5(String^);
		Data::DataSet^ stat6(String^);
		Data::DataSet^ stat7(String^);
		Data::DataSet^ stat8(String^);
		void stat9(float, float, float, float, float, float);
		Data::DataSet^ selectStock(String^);
	};
}