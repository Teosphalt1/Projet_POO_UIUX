#pragma once
#include "MapAdress.h"

String^ NS_Comp_Mappage::MapAdress::SELECT(void)
{
	return "SELECT * FROM Adress";
}

String^ NS_Comp_Mappage::MapAdress::INSERT(void)
{
	return "INSERT INTO Adress (Number, Street, Postal_code,City,Floor) VALUES ('" + this->number + "', '" + this->street + "', '" + this->postal_code + "', '" + this->city + "', '" + this->floor + "')";
}


String^ NS_Comp_Mappage::MapAdress::DELETE(void)
{
	return "DELETE FROM Adress WHERE id_adress = '" + this->id_adress + "'";
}

String^ NS_Comp_Mappage::MapAdress::UPDATE(void)
{
	return "UPDATE Adress SET Number = '" + this->number + "', Street = '" + this->street + "', Postal_code = '" + this->postal_code + "', City = '" + this->city + "', Floor = '" + this->floor + "' WHERE ID_adress = '" + this->id_adress + "'";
}

void NS_Comp_Mappage::MapAdress::setId_adress(int id)
{
	this->id_adress = id;
}
void NS_Comp_Mappage::MapAdress::setNumber(int number)
{
	this->number = number;
}
void NS_Comp_Mappage::MapAdress::setPostalCode(int postalcode)
{
	this->postal_code = postalcode;
}
void NS_Comp_Mappage::MapAdress::setFloor(int floor)
{
	this->floor = floor;
}
void NS_Comp_Mappage::MapAdress::setStreet(String^ street)
{
	this->street = street;
}
void NS_Comp_Mappage::MapAdress::setCity(String^ city)
{
	this->city = city;
}

int NS_Comp_Mappage::MapAdress::getId_adress(void) { return this->id_adress; }
int NS_Comp_Mappage::MapAdress::getNumber(void) { return this->number; }
String^ NS_Comp_Mappage::MapAdress::getStreet(void) { return this->street; }
int NS_Comp_Mappage::MapAdress::getPostalCode(void) { return this->postal_code; }
String^ NS_Comp_Mappage::MapAdress::getCity(void) { return this->city; }
int NS_Comp_Mappage::MapAdress::getFloor(void) { return this->floor; }