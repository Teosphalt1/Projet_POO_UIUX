#include "GestionAdress.h"

NS_Comp_Svc::GestionAdress::GestionAdress(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapAdress = gcnew NS_Comp_Mappage::MapAdress();
}

Data::DataSet^ NS_Comp_Svc::GestionAdress::selectAdress(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapAdress->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionAdress::insertAdress(int number, String^ street, int postal_code, String^ city, int floor)
{
	String^ sql;

	this->oMapAdress->setNumber(number);
	this->oMapAdress->setStreet(street);
	this->oMapAdress->setPostalCode(postal_code);
	this->oMapAdress->setCity(city);
	this->oMapAdress->setFloor(floor);
	sql = this->oMapAdress->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionAdress::_deleteAdress(int id)
{
	String^ sql;

	this->oMapAdress->setId_adress(id);
	sql = this->oMapAdress->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionAdress::updateAdress(int id, int number, String^ street, int postal_code, String^ city, int floor)
{
	String^ sql;

	this->oMapAdress->setId_adress(id);
	this->oMapAdress->setNumber(number);
	this->oMapAdress->setStreet(street);
	this->oMapAdress->setPostalCode(postal_code);
	this->oMapAdress->setCity(city);
	this->oMapAdress->setFloor(floor);
	sql = this->oMapAdress->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionAdress::~GestionAdress()
{
	delete oMapAdress;
}