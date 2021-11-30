#include"GestionStat.h"

NS_Comp_Svc::GestionStat::GestionStat(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapStat = gcnew NS_Comp_Mappage::MapStat();
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat1(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT1();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat2(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT2();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat3(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT3();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat4(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT4();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat5(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT5();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat6(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT6();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat7(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT7();
	return this->oCad->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::GestionStat::stat8(String^ dataTableName)
{
	String^ sql;

	sql = this->oMapStat->STAT8();
	return this->oCad->getRows(sql, dataTableName);
}

