#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage
{
	ref class MapClients : public Map
	{
	private:
		int id_client;
		String^ name_client;
		String^ last_name_client;
		String^ birth_date;
		String^ first_purchase_date;
		String^ name_company;
		int id_adress;
		int id_adress_to_bill;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_client(int);
		void setName_client(String^);
		void setLast_name_client(String^);
		void setBirth_date(String^);
		void setFirst_purchase_date(String^);
		void setName_company(String^);
		void setId_adress(int);
		void setId_adress_to_bill(int);

		int getId_client(void);
		String^ getName_client(void);
		String^ getLast_name_client(void);
		String^ getBirth_date(void);
		String^ getFirst_purchase_date(void);
		String^ getName_company(void);
		int getId_adress(void);
		int getId_adress_to_bill(void);
	};
}