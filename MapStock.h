#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapStock : public Map						//Déclaration de notre classe MapStock qui hérite de notre class Map
	{
	private:
		int id_product;
		String^ name;
		int stored_quantity;
		int replenishment_threshold;
		int tva_rate;									//Déclaration de nos données en private afin de garantir une plus grande sécurité et d'éviter que l'utillisateur puisse agir directement sur ces dérnières
		String^ nature;
		String^ color;
		int ht_amount;
		int tva_amount;
		int ttc_amount;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des méthodes définies dans notre classe mère
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_product(int);
		void setName(String^);
		void setStored_quantity(int);
		void setReplenishment_threshold(int);
		void setTva_rate(int);							//Création de nos accesseurs Set afin de pouvoir donner une valeur à nos données déclarées en private
		void setNature(String^);
		void setColor(String^);
		void setHt_amount(int);
		void setTva_amount(int);
		void setTtc_amount(int);

		int getId_product(void);
		String^ getName(void);
		int getStored_quantity(void);
		int getReplenishment_threshold(void);
		int getTva_rate(void);							//Création de nos accesseurs Get afin de récupérer la valeur de nos données 
		String^ getNature(void);
		String^ getColor(void);
		int getHt_amount(void);
		int getTva_amount(void);
		int getTtc_amount(void);
	};
}