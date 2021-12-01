#pragma once
#include"pch.h"
#include "CAD.h"

NS_Comp_Data::CAD::CAD(void)
{
	this->sCnx = "Data Source=LAPTOP-502SFKRC\\MYSQL_THEOPHILE;Initial Catalog=DB_PROJECT;User ID=CNX_PROJET;Password=root";	//Chaine de connexion à la base de données hébergée localement
	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);														//Connexion
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);												//Commande
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();																//Pont entre c++ et sql
	this->oDs = gcnew System::Data::DataSet();																					//Cache de données en mémoire

	this->oCmd->CommandType = System::Data::CommandType::Text;
}

DataSet^ NS_Comp_Data::CAD::getRows(System::String^ sSql, System::String^ sDataTableName)										//Commandes permettant la connection à une table de la base de données et d'en récupérer les informations
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}

void NS_Comp_Data::CAD::actionRows(System::String^ sSql)																		//Commandes permettant d'insérer des données dans les colonnes spécifiées de la table choisie de la BDD
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}

void NS_Comp_Data::CAD::deleteRows(System::String^ sSql)																		//Commandes permettant la suppression d'informations dans la table sélectionnèe
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->DeleteCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}

void NS_Comp_Data::CAD::updateRows(System::String^ sSql)																		//Commandes permettant de mofifier les informations contenues dans une table de notre bdd
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}