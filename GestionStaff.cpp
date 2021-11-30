#include "GestionStaff.h"

NS_Comp_Svc::GestionStaff::GestionStaff(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapStaff = gcnew NS_Comp_Mappage::MapStaff();
}

Data::DataSet^ NS_Comp_Svc::GestionStaff::selectStaff(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStaff->SELECT();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::GestionStaff::insertStaff(String^ name_staff, String^ last_name_staff, String^ hire_date, String^ name_supervisor, String^ last_name_supervisor, int id_adress)
{
	String^ sql;

	this->oMapStaff->setName_staff(name_staff);
	this->oMapStaff->setLast_name_staff(last_name_staff);
	this->oMapStaff->setHire_date(hire_date);
	this->oMapStaff->setName_supervisor(name_supervisor);
	this->oMapStaff->setLast_name_supervisor(last_name_supervisor);
	this->oMapStaff->setId_adress(id_adress);
	sql = this->oMapStaff->INSERT();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::GestionStaff::_deleteStaff(int id_staff)
{
	String^ sql;

	this->oMapStaff->setId_staff(id_staff);
	sql = this->oMapStaff->DELETE();
	this->oCad->deleteRows(sql);
}

void NS_Comp_Svc::GestionStaff::updateStaff(int id_staff, String^ name_staff, String^ last_name_staff, String^ hire_date, String^ name_supervisor, String^ last_name_supervisor, int id_adress)
{
	String^ sql;

	this->oMapStaff->setId_staff(id_staff);
	this->oMapStaff->setName_staff(name_staff);
	this->oMapStaff->setLast_name_staff(last_name_staff);
	this->oMapStaff->setHire_date(hire_date);
	this->oMapStaff->setName_supervisor(name_supervisor);
	this->oMapStaff->setLast_name_supervisor(last_name_supervisor);
	this->oMapStaff->setId_adress(id_adress);
	sql = this->oMapStaff->UPDATE();
	this->oCad->updateRows(sql);
}

NS_Comp_Svc::GestionStaff::~GestionStaff()
{
	delete oMapStaff;
}