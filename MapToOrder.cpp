#include"MapToOrder.h"

String^ NS_Comp_Mappage::MapToOrder::SELECT(void)
{
	return "SELECT To_order.ID_order, To_order.ID_product,To_order.Quantity,Stock.Name from To_order INNER JOIN Stock on To_order.ID_product = Stock.ID_product ORDER BY ID_order";
}

String^ NS_Comp_Mappage::MapToOrder::INSERT(void)
{
	return "INSERT INTO To_order (ID_product, ID_order, Quantity) VALUES ('" + this->id_product + "', '" + this->id_order + "', '" + this->quantity + "')";
}

String^ NS_Comp_Mappage::MapToOrder::DELETE(void)
{
	return "DELETE FROM To_order WHERE ID_product = '" + this->id_product + "' AND ID_order = '" + this->id_order + "'";
}

String^ NS_Comp_Mappage::MapToOrder::UPDATE(void)
{
	return "UPDATE To_order SET Quantity = '" + this->quantity + "' WHERE ID_product = '" + this->id_product + "' AND ID_order = '" + this->id_order + "'";
}

void NS_Comp_Mappage::MapToOrder::setQuantity(int quantity)
{
	this->quantity = quantity;
}
void NS_Comp_Mappage::MapToOrder::setId_order(int id_order)
{
	this->id_order = id_order;
}
void NS_Comp_Mappage::MapToOrder::setId_product(int id_product)
{
	this->id_product = id_product;
}

int NS_Comp_Mappage::MapToOrder::getQuantity(void) { return this->quantity; }
int NS_Comp_Mappage::MapToOrder::getId_order(void) { return this->id_order; }
int NS_Comp_Mappage::MapToOrder::getId_product(void) { return this->id_product; }