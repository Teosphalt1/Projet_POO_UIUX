#include"GestionOrder.h"

NS_Comp_Svc::GestionOrder::GestionOrder(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapOrder = gcnew NS_Comp_Mappage::MapOrder();
}

Data::DataSet^ NS_Comp_Svc::GestionOrder::selectOrder(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapOrder->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionOrder::insertOrder(String^ reference, String^ delivery_date, String^ order_date, int discount, int id_client)
{
	String^ sql;

	this->oMapOrder->setReference(reference);
	this->oMapOrder->setDelivery_date(delivery_date);
	this->oMapOrder->setOrder_date(order_date);
	this->oMapOrder->setDiscount(discount);
	this->oMapOrder->setId_client(id_client);
	sql = this->oMapOrder->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionOrder::_deleteOrder(int id_order)
{
	String^ sql;

	this->oMapOrder->setId_order(id_order);
	sql = this->oMapOrder->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionOrder::updateOrder(int id_order, String^ reference, String^ delivery_date, String^ order_date, int discount, int id_client)
{
	String^ sql;

	this->oMapOrder->setId_order(id_order);
	this->oMapOrder->setReference(reference);
	this->oMapOrder->setDelivery_date(delivery_date);
	this->oMapOrder->setOrder_date(order_date);
	this->oMapOrder->setDiscount(discount);
	this->oMapOrder->setId_client(id_client);
	sql = this->oMapOrder->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionOrder::~GestionOrder()
{
	delete oMapOrder;
}