#pragma once
#include"pch.h"
#include"Map.h"

namespace NS_Comp_Mappage
{
	ref class MapStat
	{
	private:
		float stock_value;
		float tva;
		float margin;
		float discount;
		float uknown_brand;
		float result;
	public:
		String^ STAT1(void);
		String^ STAT2(void);
		String^ STAT3(void);
		String^ STAT4(void);
		String^ STAT5(void);
		String^ STAT6(void);
		String^ STAT7(void);
		String^ STAT8(void);
		String^ STAT9(void);
		String^ SELECT(void);

		float getTva(void);
		float getMargin(void);
		float getDiscount(void);
		float getUknown_brand(void);
		float getResult(void);
		float getStock_value(void);

		void setTVA(float);
		void setMargin(float);
		void setDiscount(float);
		void setUknown_brand(float);
		void setResult(float);
		void setStock_value(float);
	};
}