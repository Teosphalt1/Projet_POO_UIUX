#pragma once
#include "pch.h"
#include "Map.h"
namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapPayment : public Map					//D�claration de notre classe MapPayment qui h�rite de notre class Map
	{
	private:
		int id_payment;
		String^ payment_date;
		String^ payment_method;
		int ht_amount;									//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		int tva_amount;
		int ttc_amount;
		int id_order;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_payment(int);
		void setPayment_date(String^);
		void setPayment_method(String^);
		void setHt_amount(int);							//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setTva_amount(int);
		void seTtc_amount(int);
		void setId_order(int);

		int getId_payment(void);
		String^ getPayment_date(void);
		String^ getPayment_method(void);
		int getHt_amount(void);							//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		int getTva_amount(void);
		int getTtc_amount(void);
		int getId_order(void);
	};
}