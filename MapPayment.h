#pragma once
#include "pch.h"
#include "Map.h"
namespace NS_Comp_Mappage
{
	ref class MapPayment : public Map
	{
	private:
		int id_payment;
		String^ payment_date;
		String^ payment_method;
		int ht_amount;
		int tva_amount;
		int ttc_amount;
		int id_order;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_payment(int);
		void setPayment_date(String^);
		void setPayment_method(String^);
		void setHt_amount(int);
		void setTva_amount(int);
		void seTtc_amount(int);
		void setId_order(int);

		int getId_payment(void);
		String^ getPayment_date(void);
		String^ getPayment_method(void);
		int getHt_amount(void);
		int getTva_amount(void);
		int getTtc_amount(void);
		int getId_order(void);
	};
}