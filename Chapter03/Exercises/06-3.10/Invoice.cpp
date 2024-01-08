#include "Invoice.h"

Invoice::Invoice(const std::string& partNumber,
	const std::string partDescription,
	int quantity, int unitPrice) :
	m_partNumber{ partNumber },
	m_partDescription{ partDescription },
	m_quantity{ 0 },
	m_unitPrice{ 0 }
{
	if (quantity > 0)
		m_quantity = quantity;

	if (unitPrice > 0)
		m_unitPrice = unitPrice;
}

void Invoice::setPartNumber(const std::string& newPartNumber)
{
	m_partNumber = newPartNumber;
}

void Invoice::setPartDescription(const std::string& newPartDescription)
{
	m_partDescription = newPartDescription;
}

void Invoice::setQuantity(int newQuantity)
{
	m_quantity = newQuantity;
}

void Invoice::setUnitPrice(int newUnitPrice)
{
	m_unitPrice = newUnitPrice;
}

std::string Invoice::getPartNumber() const
{
	return m_partNumber;
}

std::string Invoice::getPartDescription() const
{
	return m_partDescription;
}

int Invoice::getQuantity() const
{
	return m_quantity;
}

int Invoice::getUnitPrice() const
{
	return m_unitPrice;
}

int Invoice::getInvoiceAmount() const
{
	return m_quantity * m_unitPrice;
}
