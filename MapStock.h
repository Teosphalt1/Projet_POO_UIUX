#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class MapStock : public Map						//D�claration de notre classe MapStock qui h�rite de notre class Map
	{
	private:
		int id_product;
		String^ name;
		int stored_quantity;
		int replenishment_threshold;
		int tva_rate;									//D�claration de nos donn�es en private afin de garantir une plus grande s�curit� et d'�viter que l'utillisateur puisse agir directement sur ces d�rni�res
		String^ nature;
		String^ color;
		int ht_amount;
		int tva_amount;
		int ttc_amount;
	public:
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;			//Utillisation dans notre classe fille des m�thodes d�finies dans notre classe m�re
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(void) override;

		void setId_product(int);
		void setName(String^);
		void setStored_quantity(int);
		void setReplenishment_threshold(int);
		void setTva_rate(int);							//Cr�ation de nos accesseurs Set afin de pouvoir donner une valeur � nos donn�es d�clar�es en private
		void setNature(String^);
		void setColor(String^);
		void setHt_amount(int);
		void setTva_amount(int);
		void setTtc_amount(int);

		int getId_product(void);
		String^ getName(void);
		int getStored_quantity(void);
		int getReplenishment_threshold(void);
		int getTva_rate(void);							//Cr�ation de nos accesseurs Get afin de r�cup�rer la valeur de nos donn�es 
		String^ getNature(void);
		String^ getColor(void);
		int getHt_amount(void);
		int getTva_amount(void);
		int getTtc_amount(void);
	};
}