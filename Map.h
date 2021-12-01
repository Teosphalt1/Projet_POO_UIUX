#pragma once
#include"pch.h"

namespace NS_Comp_Mappage								//Fait parti des composants de mappage
{
	ref class Map										//D�claration de la classe m�re Map
	{
	public:
		virtual String^ SELECT(void) abstract;			//D�claration de notre m�thode virtuelle Select afin de r�cup�rer les informations d'une table de notre BDD
		virtual String^ INSERT(void) abstract;			//D�claration de notre m�thode virtuelle Insert afin d'ins�rer des donn�es dans les tables de notre BDD
		virtual String^ DELETE(void) abstract;			//D�claration de notre m�thode virtuelle Delete afin de supprimer des donn�es dans les tables de notre BDD
		virtual String^ UPDATE(void) abstract;			//D�claration de notre m�thode virtuelle Update afin de modifier des informations d�j� pr�sentes dans notre BDD
	};
}