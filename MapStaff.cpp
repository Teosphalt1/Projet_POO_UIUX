#include "MapStaff.h"

String^ NS_Comp_Mappage::MapStaff::SELECT(void)
{
	return "SELECT * FROM Staff";
}

String^ NS_Comp_Mappage::MapStaff::INSERT(void)
{
	return" INSERT INTO Staff (Name_staff, Last_name_staff, Hire_date, Name_supervisor, Last_name_supervisor, ID_adress) VALUES ('"+ this->name_staff +"','" + this->last_name_staff + "','" + this->hire_date + "','" + this->name_supervisor + "','" + this->last_name_supervisor + "','" + this->id_adress + "')";
}

String^ NS_Comp_Mappage::MapStaff::DELETE(void)
{
	return "DELETE FROM STAFF Where id_staff = ('" + this->id_staff + "')";
}
String^ NS_Comp_Mappage::MapStaff::UPDATE(void)
{
	return "UPDATE Staff SET Name_staff = '" + this->name_staff + "', Last_name_staff = '" + this->last_name_staff + "', Hire_date = '" + this->hire_date + "', Name_supervisor = '" + this->name_supervisor + "', Last_name_supervisor = '" + this->last_name_supervisor + "', ID_adress = '" + this->id_adress + "' WHERE ID_staff = '" + this->id_staff + "'";
}

void NS_Comp_Mappage::MapStaff::setId_staff(int id_staff)
{
	this->id_staff = id_staff;
}
void NS_Comp_Mappage::MapStaff::setName_staff(String^ name_staff)
{
	this->name_staff = name_staff;
}
void NS_Comp_Mappage::MapStaff::setLast_name_staff(String^ last_name_staff)
{
	this->last_name_staff = last_name_staff;
}
void NS_Comp_Mappage::MapStaff::setHire_date(String^ hire_date)
{
	this->hire_date = hire_date;
}
void NS_Comp_Mappage::MapStaff::setName_supervisor(String^ name_supervisor)
{
	this->name_supervisor = name_supervisor;
}
void NS_Comp_Mappage::MapStaff::setLast_name_supervisor(String^ last_name_supervisor)
{
	this->last_name_supervisor = last_name_supervisor;
}
void NS_Comp_Mappage::MapStaff::setId_adress(int id_adress)
{
	this->id_adress = id_adress;
}

int NS_Comp_Mappage::MapStaff::getId_staff(void) { return this->id_staff; }
String^ NS_Comp_Mappage::MapStaff::getName_staff(void) { return this->name_staff;  }
String^ NS_Comp_Mappage::MapStaff::getLast_name_staff(void) { return this->last_name_staff; }
String^ NS_Comp_Mappage::MapStaff::getHire_date(void) { return this->hire_date; }
String^ NS_Comp_Mappage::MapStaff::getName_supervisor(void) { return this->name_supervisor; }
String^ NS_Comp_Mappage::MapStaff::getLast_name_supervisor(void) { return this->last_name_supervisor; }
int NS_Comp_Mappage::MapStaff::getId_adress(void) { return this->id_adress; }