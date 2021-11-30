#pragma once
#include"MapPayment.h"

String^ NS_Comp_Mappage::MapPayment::SELECT(void)
{
	return "SELECT * FROM Payment";
}

String^ NS_Comp_Mappage::MapPayment::INSERT(void)
{
	return "INSERT INTO Payment (Payment_date, Payment_method, HT_amount, TVA_amount, TTC_amount, ID_order) VALUES ('"+ this->payment_date +"','" + this->payment_method + "','" + this->ht_amount + "','" + this->tva_amount + "','" + this->ttc_amount + "','" + this->id_order + "')";
}

String^ NS_Comp_Mappage::MapPayment::DELETE(void)
{
	return "DELETE FROM Payment WHERE ID_payment = ('"+ this->id_payment +"')";
}

String^ NS_Comp_Mappage::MapPayment::UPDATE(void)
{
	return "UPDATE Payment SET Payment_date = ('" + this->payment_date + "'), Payment_method = ('" + this->payment_method + "'), HT_amount = ('" + this->ht_amount + "'), TVA_amount = ('" + this->tva_amount + "'), TTC_amount = ('" + this->ttc_amount + "'), ID_order = ('" + this->id_order + "') WHERE ID_payment = ('" + this->id_payment + "')";
}

void NS_Comp_Mappage::MapPayment::setId_payment(int id_payment)
{
	this->id_payment = id_payment;
}
void NS_Comp_Mappage::MapPayment::setPayment_date(String^ payment_date)
{
	this->payment_date = payment_date;
}
void NS_Comp_Mappage::MapPayment::setPayment_method(String^ payment_method)
{
	this->payment_method = payment_method;
}
void NS_Comp_Mappage::MapPayment::setHt_amount(int ht_amount)
{
	this->ht_amount = ht_amount;
}
void NS_Comp_Mappage::MapPayment::setTva_amount(int tva_amount)
{
	this->tva_amount = tva_amount;
}
void NS_Comp_Mappage::MapPayment::seTtc_amount(int ttc_amount)
{
	this->ttc_amount = ttc_amount;
}
void NS_Comp_Mappage::MapPayment::setId_order(int id_order)
{
	this->id_order = id_order;
}

int NS_Comp_Mappage::MapPayment::getId_payment(void) { return this->id_payment; }
String^ NS_Comp_Mappage::MapPayment::getPayment_date(void) { return this->payment_date; }
String^ NS_Comp_Mappage::MapPayment::getPayment_method(void) { return this->payment_method; }
int NS_Comp_Mappage::MapPayment::getHt_amount(void) { return this->ht_amount; }
int NS_Comp_Mappage::MapPayment::getTva_amount(void) { return this->tva_amount; }
int NS_Comp_Mappage::MapPayment::getTtc_amount(void) { return this->ttc_amount; }
int NS_Comp_Mappage::MapPayment::getId_order(void) { return this->id_order; }