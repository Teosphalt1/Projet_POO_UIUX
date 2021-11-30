#include"MapOrder.h"

String^ NS_Comp_Mappage::MapOrder::SELECT()
{
	return "Select * FROM Order_";
}

String^ NS_Comp_Mappage::MapOrder::INSERT()
{
	return "INSERT INTO Order_ (Reference, Delivery_date, Order_date, Discount, ID_client) VALUES ('"+ this->reference +"', '" + this->delivery_date + "', '"+ this->order_date +"', '" + this->discount + "', '" + this->id_client + "')";
}

String^ NS_Comp_Mappage::MapOrder::DELETE()
{
	return "DELETE FROM Order_ WHERE id_order = ('"+ this->id_order +"')";
}

String^ NS_Comp_Mappage::MapOrder::UPDATE()
{
	return "Update Order_ SET Reference = '"+ this->reference +"', Delivery_date = '"+ this->delivery_date +"', Order_date = '"+ this->order_date +"' , Discount = '"+ this->discount +"', ID_client = '"+ this->id_client +"' WHERE ID_order = '"+ this->id_order +"'";
}

void NS_Comp_Mappage::MapOrder::setId_order(int id_order)
{
	this->id_order = id_order;
}
void NS_Comp_Mappage::MapOrder::setReference(String^ reference)
{
	this->reference = reference;
}
void NS_Comp_Mappage::MapOrder::setDelivery_date(String^ delivery_date)
{
	this->delivery_date = delivery_date;
}
void NS_Comp_Mappage::MapOrder::setOrder_date(String^ order_date)
{
	this->order_date = order_date;
}
void NS_Comp_Mappage::MapOrder::setDiscount(int discount)
{
	this->discount = discount;
}
void NS_Comp_Mappage::MapOrder::setId_client(int id_client)
{
	this->id_client = id_client;
}

int NS_Comp_Mappage::MapOrder::getId_order(void) { return this->id_order; }
String^ NS_Comp_Mappage::MapOrder::getReference(void) { return this->reference; }
String^ NS_Comp_Mappage::MapOrder::getDelivery_date(void) { return this->delivery_date; }
String^ NS_Comp_Mappage::MapOrder::getOrder_date(void) { return this->order_date; }
int NS_Comp_Mappage::MapOrder::getDiscount(void) { return this->discount; }
int NS_Comp_Mappage::MapOrder::getId_client(void) { return this->id_client; }
