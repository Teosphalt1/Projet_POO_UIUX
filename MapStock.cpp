#include "MapStock.h"

String^ NS_Comp_Mappage::MapStock::SELECT(void)
{
	return "SELECT * FROM Stock";
}

String^ NS_Comp_Mappage::MapStock::INSERT(void)
{
	return "INSERT INTO Stock (Name, Stored_quantity, Replenishment_threshold, TVA_rate, Nature, Color, HT_amount, TVA_amount, TTC_amount) VALUES ('"+ this->name +"','"+ this->stored_quantity +"','"+ this->replenishment_threshold +"', '"+ this->tva_rate +"', '"+ this->nature +"', '"+ this->color +"', '"+ this->ht_amount +"', '" +this->tva_amount +"','"+ this->ttc_amount +"')";
}

String^ NS_Comp_Mappage::MapStock::DELETE(void)
{
	return "DELETE FROM Stock WHERE id_product = ('" + this->id_product + "')";
}

String^ NS_Comp_Mappage::MapStock::UPDATE(void)
{
	return "UPDATE Stock SET Name = '"+ this->name +"', Stored_quantity = '" + this->stored_quantity + "', Replenishment_threshold = '" + this->replenishment_threshold + "', TVA_rate = '" + this->tva_rate + "', Nature = '" + this->nature + "', Color = '" + this->color + "', HT_amount = '" + this->ht_amount + "', TVA_amount = '" + this->tva_amount + "', TTC_amount = '" + this->ttc_amount + "' WHERE ID_product = '"+ this->id_product +"'";
}

void NS_Comp_Mappage::MapStock::setId_product(int id_product)
{
	this->id_product = id_product;
}
void NS_Comp_Mappage::MapStock::setName(String^ name)
{
	this->name = name;
}
void NS_Comp_Mappage::MapStock::setStored_quantity(int stored_quantity)
{
	this->stored_quantity = stored_quantity;
}
void NS_Comp_Mappage::MapStock::setReplenishment_threshold(int replenishment_threshold)
{
	this->replenishment_threshold = replenishment_threshold;
}
void NS_Comp_Mappage::MapStock::setTva_rate(int tva_rate)
{
	this->tva_rate = tva_rate;
}
void NS_Comp_Mappage::MapStock::setNature(String^ nature)
{
	this->nature = nature;
}
void NS_Comp_Mappage::MapStock::setColor(String^ color)
{
	this->color = color;
}
void NS_Comp_Mappage::MapStock::setHt_amount(int ht_amount)
{
	this->ht_amount = ht_amount;
}
void NS_Comp_Mappage::MapStock::setTva_amount(int tva_amount)
{
	this->tva_amount = tva_amount;
}
void NS_Comp_Mappage::MapStock::setTtc_amount(int ttc_amount)
{
	this->ttc_amount = ttc_amount;
}

int NS_Comp_Mappage::MapStock::getId_product(void) { return this->id_product; }
String^ NS_Comp_Mappage::MapStock::getName(void) { return this->name; }
int NS_Comp_Mappage::MapStock::getStored_quantity(void) { return this->stored_quantity; }
int NS_Comp_Mappage::MapStock::getReplenishment_threshold(void) { return this->replenishment_threshold; }
int NS_Comp_Mappage::MapStock::getTva_rate(void) { return this->tva_rate; }
String^ NS_Comp_Mappage::MapStock::getNature(void) { return this->nature; }
String^ NS_Comp_Mappage::MapStock::getColor(void) { return this->color; }
int NS_Comp_Mappage::MapStock::getHt_amount(void) { return this->ht_amount; }
int NS_Comp_Mappage::MapStock::getTva_amount(void) { return this->tva_amount; }
int NS_Comp_Mappage::MapStock::getTtc_amount(void) { return this->ttc_amount; }