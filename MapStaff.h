#pragma once
#include"pch.h"
#include "Map.h"

namespace NS_Comp_Mappage
{
	ref class MapStaff : public Map
	{
	private:
		int id_staff;
		String^ name_staff;
		String^ last_name_staff;
		String^ hire_date;
		String^ name_supervisor;
		String^ last_name_supervisor;
		int id_adress;

	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_staff(int);
		void setName_staff(String^);
		void setLast_name_staff(String^);
		void setHire_date(String^);
		void setName_supervisor(String^);
		void setLast_name_supervisor(String^);
		void setId_adress(int);

		int getId_staff(void);
		String^ getName_staff(void);
		String^ getLast_name_staff(void);
		String^ getHire_date(void);
		String^ getName_supervisor(void);
		String^ getLast_name_supervisor(void);
		int getId_adress(void);
	};
}