#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice
{
public:
	Invoice(const std::string& partNumber, const std::string partDescription,
		int quantity, int unitPrice);

	void setPartNumber(const std::string& newPartNumber);
	void setPartDescription(const std::string& newPartDescription);
	void setQuantity(int newQuantity);
	void setUnitPrice(int newUnitPrice);

	std::string getPartNumber() const;
	std::string getPartDescription() const;
	int getQuantity() const;
	int getUnitPrice() const;
	int getInvoiceAmount() const;

private:
	std::string m_partNumber;
	std::string m_partDescription;
	int			m_quantity;
	int			m_unitPrice;
};

#endif // !INVOICE_H

