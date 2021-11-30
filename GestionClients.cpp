#include "GestionClients.h"

NS_Comp_Svc::GestionClients::GestionClients(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapClients = gcnew NS_Comp_Mappage::MapClients();
}

Data::DataSet^ NS_Comp_Svc::GestionClients::selectClients(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapClients->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionClients::insertClients(String^ name_client, String^ last_name_client, String^ birth_date, String^ first_purchase_date, String^ name_company, int id_adress, int id_adress_to_bill)
{
	String^ sql;

	this->oMapClients->setName_client(name_client);
	this->oMapClients->setLast_name_client(last_name_client);
	this->oMapClients->setBirth_date(birth_date);
	this->oMapClients->setFirst_purchase_date(first_purchase_date);
	this->oMapClients->setName_company(name_company);
	this->oMapClients->setId_adress(id_adress);
	this->oMapClients->setId_adress_to_bill(id_adress_to_bill);
	sql = this->oMapClients->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionClients::_deleteClients(int id_client)
{
	String^ sql;

	this->oMapClients->setId_client(id_client);
	sql = this->oMapClients->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionClients::updateClients(int id_client, String^ name_client, String^ last_name_client, String^ birth_date, String^ first_purchase_date, String^ name_company,  int id_adress, int id_adress_to_bill)
{
	String^ sql;

	this->oMapClients->setId_client(id_client);
	this->oMapClients->setName_client(name_client);
	this->oMapClients->setLast_name_client(last_name_client);
	this->oMapClients->setBirth_date(birth_date);
	this->oMapClients->setFirst_purchase_date(first_purchase_date);
	this->oMapClients->setName_company(name_company);
	this->oMapClients->setId_adress(id_adress);
	this->oMapClients->setId_adress_to_bill(id_adress_to_bill);
	sql = this->oMapClients->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionClients::~GestionClients()
{
	delete oMapClients;
}