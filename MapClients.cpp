#include "MapClients.h"

String^ NS_Comp_Mappage::MapClients::SELECT(void)
{
	return "SELECT * FROM Clients";
}

String^ NS_Comp_Mappage::MapClients::INSERT(void)
{
	return "INSERT INTO Clients (Name_client, Last_name_client, Birth_date, First_purchase_date, Name_company, ID_adress, ID_adress_To_bill) VALUES('"+ this->name_client +"', '"+ this->last_name_client +"', '"+ this->birth_date +"', '"+ this->first_purchase_date +"', '"+ this->name_company +"', '"+ this->id_adress +"', '"+ this->id_adress_to_bill +"')";
}

String^ NS_Comp_Mappage::MapClients::DELETE(void)
{
	return "DELETE FROM Clients where id_client = '"+ this->id_client +"'";
}

String^ NS_Comp_Mappage::MapClients::UPDATE(void)
{
	return "UPDATE CLIENTS SET Name_client = '" + this->name_client + "', Last_name_client = '" + this->last_name_client + "', Birth_date = '" + this->birth_date + "', First_purchase_date = '" + this->first_purchase_date + "', Name_company = '" + this->name_company + "', Id_adress = '" + this->id_adress + "', Id_adress_To_bill = '" + this->id_adress_to_bill + "' WHERE Id_client = '" + this->id_client + "'";
}

void NS_Comp_Mappage::MapClients::setId_client(int id_client)
{
	this->id_client = id_client;
}
void NS_Comp_Mappage::MapClients::setName_client(String^ name_client)
{
	this->name_client = name_client;
}
void NS_Comp_Mappage::MapClients::setLast_name_client(String^ last_name_client)
{
	this->last_name_client = last_name_client;
}
void NS_Comp_Mappage::MapClients::setBirth_date(String^ birth_date)
{
	this->birth_date = birth_date;
}
void NS_Comp_Mappage::MapClients::setFirst_purchase_date(String^ first_purchase_date)
{
	this->first_purchase_date = first_purchase_date;
}
void NS_Comp_Mappage::MapClients::setName_company(String^ name_company)
{
	this->name_company = name_company;
}

void NS_Comp_Mappage::MapClients::setId_adress(int id_adress)
{
	this->id_adress = id_adress;
}
void NS_Comp_Mappage::MapClients::setId_adress_to_bill(int id_adress_to_bill)
{
	this->id_adress_to_bill = id_adress_to_bill;
}

int NS_Comp_Mappage::MapClients::getId_client(void) { return this->id_client; }
String^ NS_Comp_Mappage::MapClients::getName_client(void) { return this->name_client; }
String^ NS_Comp_Mappage::MapClients::getLast_name_client(void) { return this->last_name_client; }
String^ NS_Comp_Mappage::MapClients::getBirth_date(void) { return this->birth_date; }
String^ NS_Comp_Mappage::MapClients::getFirst_purchase_date(void) { return this->first_purchase_date; }
String^ NS_Comp_Mappage::MapClients::getName_company(void) { return this->name_company; }
int NS_Comp_Mappage::MapClients::getId_adress(void) { return this->id_adress; }
int NS_Comp_Mappage::MapClients::getId_adress_to_bill(void) { return this->id_adress; }