#pragma once
#include"pch.h"
#include "Map.h"

namespace NS_Comp_Mappage
{
	ref class MapToOrder : public Map
	{
	private:
		int quantity;
		int id_product;
		int id_order;

	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setQuantity(int);
		void setId_product(int);
		void setId_order(int);

		int getQuantity(void);
		int getId_product(void);
		int getId_order(void);
	};
}