#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage{
	ref class MapStock : public Map
	{
	private:
		int id_product;
		String^ name;
		int stored_quantity;
		int replenishment_threshold;
		int tva_rate;
		String^ nature;
		String^ color;
		int ht_amount;
		int tva_amount;
		int ttc_amount;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_product(int);
		void setName(String^);
		void setStored_quantity(int);
		void setReplenishment_threshold(int);
		void setTva_rate(int);
		void setNature(String^);
		void setColor(String^);
		void setHt_amount(int);
		void setTva_amount(int);
		void setTtc_amount(int);

		int getId_product(void);
		String^ getName(void);
		int getStored_quantity(void);
		int getReplenishment_threshold(void);
		int getTva_rate(void);
		String^ getNature(void);
		String^ getColor(void);
		int getHt_amount(void);
		int getTva_amount(void);
		int getTtc_amount(void);
	};
}