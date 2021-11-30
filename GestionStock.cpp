#include"GestionStock.h"

NS_Comp_Svc::GestionStock::GestionStock(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapStock = gcnew NS_Comp_Mappage::MapStock();
}

Data::DataSet^ NS_Comp_Svc::GestionStock::selectStock(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStock->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionStock::insertStock(String^ name, int stored_quantity, int replenishment_threshold, int tva_rate, String^ nature, String^ color, int ht_amount, int tva_amount, int ttc_amount)
{
	String^ sql;

	this->oMapStock->setName(name);
	this->oMapStock->setStored_quantity(stored_quantity);
	this->oMapStock->setReplenishment_threshold(replenishment_threshold);
	this->oMapStock->setTva_rate(tva_rate);
	this->oMapStock->setNature(nature);
	this->oMapStock->setColor(color);
	this->oMapStock->setHt_amount(ht_amount);
	this->oMapStock->setTva_amount(tva_amount);
	this->oMapStock->setTtc_amount(ttc_amount);
	sql = this->oMapStock->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionStock::_deleteStock(int id_product)
{
	String^ sql;

	this->oMapStock->setId_product(id_product);
	sql = this->oMapStock->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionStock::updateStock(int id_product, String^ name, int stored_quantity, int replenishment_threshold, int tva_rate, String^ nature, String^ color, int ht_amount, int tva_amount, int ttc_amount)
{
	String^ sql;

	this->oMapStock->setId_product(id_product);
	this->oMapStock->setName(name);
	this->oMapStock->setStored_quantity(stored_quantity);
	this->oMapStock->setReplenishment_threshold(replenishment_threshold);
	this->oMapStock->setTva_rate(tva_rate);
	this->oMapStock->setNature(nature);
	this->oMapStock->setColor(color);
	this->oMapStock->setHt_amount(ht_amount);
	this->oMapStock->setTva_amount(tva_amount);
	this->oMapStock->setTtc_amount(ttc_amount);
	sql = this->oMapStock->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionStock::~GestionStock()
{
	delete oMapStock;
}