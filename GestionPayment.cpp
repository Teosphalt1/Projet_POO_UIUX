#include"GestionPayment.h"

NS_Comp_Svc::GestionPayment::GestionPayment(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapPayment = gcnew NS_Comp_Mappage::MapPayment();
}

Data::DataSet^ NS_Comp_Svc::GestionPayment::selectPayment(String^ dataTanleName)
{
	String^ sql;

	sql = this->oMapPayment->SELECT();
	return this->oCad->getRows(sql, dataTanleName);
}

void NS_Comp_Svc::GestionPayment::insertPayment(String^ payment_date, String^ payment_method, int ht_amount, int tva_amount, int ttc_amount, int id_order)
{
	String^ sql;

	this->oMapPayment->setPayment_date(payment_date);
	this->oMapPayment->setPayment_method(payment_method);
	this->oMapPayment->setHt_amount(ht_amount);
	this->oMapPayment->setTva_amount(tva_amount);
	this->oMapPayment->seTtc_amount(ttc_amount);
	this->oMapPayment->setId_order(id_order);
	sql = this->oMapPayment->INSERT();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::GestionPayment::_deletePayment(int id_payment)
{
	String^ sql;

	this->oMapPayment->setId_payment(id_payment);
	sql = this->oMapPayment->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionPayment::updatePayment(int id_payment, String^ payment_date, String^ payment_method, int ht_amount, int tva_amount, int ttc_amount, int id_order)
{
	String^ sql;

	this->oMapPayment->setId_payment(id_payment);
	this->oMapPayment->setPayment_date(payment_date);
	this->oMapPayment->setPayment_method(payment_method);
	this->oMapPayment->setHt_amount(ht_amount);
	this->oMapPayment->setTva_amount(tva_amount);
	this->oMapPayment->seTtc_amount(ttc_amount);
	this->oMapPayment->setId_order(id_order);
	sql = this->oMapPayment->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionPayment::~GestionPayment()
{
	delete oMapPayment;
}