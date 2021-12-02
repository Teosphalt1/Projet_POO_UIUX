#include "MapStat.h"

String^ NS_Comp_Mappage::MapStat::STAT1(void) 
{
	
	return "SELECT ((SELECT SUM(TTC_amount) FROM Payment)/(COUNT(DISTINCT ID_order))) AS 'Sum' FROM Payment";
}

String^ NS_Comp_Mappage::MapStat::STAT2(void)
{
	return "SELECT SUM(TTC_amount) AS 'Turnover', SUBSTRING(Payment_date, 6, 2) AS 'Mois',  SUBSTRING(Payment_date, 1, 4) AS 'Année' from payment GROUP BY SUBSTRING(Payment_date, 6, 2), SUBSTRING(Payment_date, 1, 4)";
}

String^ NS_Comp_Mappage::MapStat::STAT3(void)
{
	return "SELECT ID_product, Name, Stored_quantity, Replenishment_threshold FROM stock WHERE Stored_quantity <= Replenishment_threshold";
}

String^ NS_Comp_Mappage::MapStat::STAT4(void)
{
	return "SELECT DISTINCT ROUND(SUM(DISTINCT(Stored_quantity)*(TTC_amount)), 2) AS 'Stock value' FROM stock";
}

String^ NS_Comp_Mappage::MapStat::STAT5(void)
{
	return "SELECT DISTINCT ROUND(SUM(DISTINCT(Stored_quantity)*(HT_amount)), 2) AS 'Stock purchase value' FROM stock";
}

String^ NS_Comp_Mappage::MapStat::STAT6(void)
{
	return "Select MAX(Name_client) AS 'Name client', MAX(Last_name_client) AS 'Last name client', sum(TTC_amount) AS 'Total des achats' from clients INNER JOIN order_ on order_.ID_client=clients.ID_client INNER JOIN payment on payment.ID_order=order_.ID_order";
}

String^ NS_Comp_Mappage::MapStat::STAT7(void)
{
	return "SELECT TOP 10 MAX(Name) as 'Name product', AVG(stock.ID_product) as 'Reference', SUM(quantity) as 'Quantity' FROM stock INNER JOIN to_order ON to_order.ID_product=stock.ID_product group by stock.ID_product ORDER BY Quantity DESC";
}

String^ NS_Comp_Mappage::MapStat::STAT8(void)
{
	return "SELECT TOP 10 MAX(Name) as 'Name product', AVG(stock.ID_product) as 'Reference', SUM(quantity) as 'Quantity' FROM stock INNER JOIN to_order ON to_order.ID_product=stock.ID_product group by stock.ID_product ORDER BY Quantity ASC";
}

String^ NS_Comp_Mappage::MapStat::STAT9(void)
{
	return "INSERT INTO Stats (stock_value, tva, margin, discount, uknown_brand, result) VALUES ('" + this->stock_value + "','" + this->tva + "', '" + this->margin + "', '" + this->uknown_brand + "', '"+ this->discount +"' ," + this->stock_value + " - " + this->stock_value + "*" + this->tva + "*0.01 - " + this->stock_value + "*" + this->margin + "*0.01 + " + this->stock_value + "*"+ this->discount +"*0.01 - " + this->stock_value + "*" + this->uknown_brand + "*0.01)";
}

String^ NS_Comp_Mappage::MapStat::SELECT(void)
{
	return "SELECT stock_value, tva, margin, discount, uknown_brand, result FROM Stats";
}

void NS_Comp_Mappage::MapStat::setStock_value(float stock_value)
{
	this->stock_value = stock_value;
}
void NS_Comp_Mappage::MapStat::setDiscount(float discount)
{
	this->discount = discount;
}
void NS_Comp_Mappage::MapStat::setTVA(float tva)
{
	this->tva = tva;
}
void NS_Comp_Mappage::MapStat::setMargin(float margin)
{
	this->margin = margin;
}
void NS_Comp_Mappage::MapStat::setUknown_brand(float uknown_brand)
{
	this->uknown_brand = uknown_brand;
}
void NS_Comp_Mappage::MapStat::setResult(float result)
{
	this->result = result;
}

float NS_Comp_Mappage::MapStat::getTva(void) { return this->tva; }
float NS_Comp_Mappage::MapStat::getMargin(void) { return this->margin; }
float NS_Comp_Mappage::MapStat::getDiscount(void) { return this->discount; }
float NS_Comp_Mappage::MapStat::getUknown_brand(void) { return this->uknown_brand; }
float NS_Comp_Mappage::MapStat::getResult(void) { return this->result; }
float NS_Comp_Mappage::MapStat::getStock_value(void) { return this->stock_value; }
