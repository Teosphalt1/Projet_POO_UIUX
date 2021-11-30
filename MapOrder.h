#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage
{
	ref class MapOrder
	{
	private:
		int id_order;
		String^ reference;
		String^ delivery_date;
		String^ order_date;
		int discount;
		int id_client;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_order(int);
		void setReference(String^);
		void setDelivery_date(String^);
		void setOrder_date(String^);
		void setDiscount(int);
		void setId_client(int);

		int getId_order(void);
		String^ getReference(void);
		String^ getDelivery_date(void);
		String^ getOrder_date(void);
		int getDiscount(void);
		int getId_client(void);
	};
}