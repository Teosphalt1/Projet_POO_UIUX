#include"GestionToOrder.h"

NS_Comp_Svc::GestionToOrder::GestionToOrder(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapToOrder = gcnew NS_Comp_Mappage::MapToOrder();
}

Data::DataSet^ NS_Comp_Svc::GestionToOrder::selectToOrder(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapToOrder->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionToOrder::insertToOrder(int id_product, int id_order, int quantity)
{
	String^ sql;

	this->oMapToOrder->setId_product(id_product);
	this->oMapToOrder->setId_order(id_order);
	this->oMapToOrder->setQuantity(quantity);
	sql = this->oMapToOrder->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionToOrder::_deleteToOrder(int id_product, int id_order)
{
	String^ sql;

	this->oMapToOrder->setId_order(id_order);
	this->oMapToOrder->setId_product(id_product);
	sql = this->oMapToOrder->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionToOrder::updateToOrder(int id_product, int id_order, int quantity)
{
	String^ sql;

	this->oMapToOrder->setId_product(id_product);
	this->oMapToOrder->setId_order(id_order);
	this->oMapToOrder->setQuantity(quantity);
	sql = this->oMapToOrder->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionToOrder::~GestionToOrder()
{
	delete oMapToOrder;
}