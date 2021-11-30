#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage
{
	ref class MapAdress : public Map
	{
	private:
		int id_adress;
		int number;
		String^ street;
		int postal_code;
		String^ city;
		int floor;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;
		void setId_adress(int);
		void setNumber(int);
		void setStreet(String^);
		void setPostalCode(int);
		void setCity(String^);
		void setFloor(int);
		int getId_adress(void);
		int getNumber(void);
		String^ getStreet(void);
		int getPostalCode(void);
		String^ getCity(void);
		int getFloor(void);
	};
}