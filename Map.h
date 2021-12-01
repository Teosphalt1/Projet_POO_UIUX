#pragma once
#include"pch.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class Map										//Déclaration de la classe mère Map
	{
	public:
		virtual String^ SELECT(void) abstract;			//Déclaration de notre méthode virtuelle Select afin de récupérer les informations d'une table de notre BDD
		virtual String^ INSERT(void) abstract;			//Déclaration de notre méthode virtuelle Insert afin d'insérer des données dans les tables de notre BDD
		virtual String^ DELETE(void) abstract;			//Déclaration de notre méthode virtuelle Delete afin de supprimer des données dans les tables de notre BDD
		virtual String^ UPDATE(void) abstract;			//Déclaration de notre méthode virtuelle Update afin de modifier des informations déjà présentes dans notre BDD
	};
}