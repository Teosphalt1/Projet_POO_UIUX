#pragma once
#include "pch.h"
#include "Map.h"
namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapPayment : public Map					//Déclaration de notre classe MapPayment qui hérite de notre class Map
	{
	private:
		int id_payment;
		String^ payment_date;
		String^ payment_method;
		int ht_amount;									//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		int tva_amount;
		int ttc_amount;
		int id_order;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_payment(int);
		void setPayment_date(String^);
		void setPayment_method(String^);
		void setHt_amount(int);							//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setTva_amount(int);
		void seTtc_amount(int);
		void setId_order(int);

		int getId_payment(void);
		String^ getPayment_date(void);
		String^ getPayment_method(void);
		int getHt_amount(void);							//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		int getTva_amount(void);
		int getTtc_amount(void);
		int getId_order(void);
	};
}